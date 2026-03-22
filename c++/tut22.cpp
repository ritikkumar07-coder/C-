#include <iostream>
#include <string>
using namespace std;

// Nesting of member function--> nesting of member function means calling one member function inside another member function of the same class. 

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void) //(isme jo 0 hai usko 1 karna hai or jo 1 hai usko 0.)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout << "displaying your binary number." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
     
    return 0;
}


/*previous class recap*/

// OOPs (recap)- Classes and objects

    // C++ --> initially called --> C with classes by stroustroup
    // structures had limitations
    //       - members are public
    //       - No methods
    //  classes --> sturctures + more
    //  classes --> can make few members as private & few as public
    //  structures in C++ are typedefed
    //  you can declare objects along with the class declaration like this:
    /* class Employee{
        // Class definition
    } ritik, ashish, harsh; */
    // ritil.salary = 8 makes no sense if salary is private(private variable ko direct set nhi kr skte)
