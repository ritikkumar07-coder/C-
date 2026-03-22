#include <iostream>
using namespace std;
// Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // induvidually declaring function as friends
    // friend int calculator::sumRealComplex(complex, complex);
    // friend int calculator::sumCompComplex(complex, complex);
    // Aliter: Declaring the entire calcualtor class as friend

    friend class calculator; //if you want to access all the data of calculator than be the friend of whole class.
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is" << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1,o2;
    o1.setnumber(1,3);
    o2.setnumber(8,5);
    calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumCompComplex(o1,o2);
    cout<<"the sum of complex part of o1 and o2 is "<<resc<<endl;
    return 0;
}