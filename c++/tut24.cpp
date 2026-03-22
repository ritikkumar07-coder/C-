#include <iostream>
using namespace std;
/*Static Data Members & Methods in C++ OOPS*/

class employee
{
    int Id;
    static int count;  /*agar static use nhi krenge to count = 0 isme mention krna padega and if static use krenge to wo zero se hi start krega*/

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << Id << " and this is emoloyee number " << count << endl;
    }

    static void getCount(void){
        // cout<<Id<<endl; --> throws an error.
        cout<<"the value of count is :"<< count<<endl;
    }
};
int employee::count=1000; /*any no. u want to put in place of 1000 just put it and its started running from there. ex this is employee no.1001*/

int main()
{
    employee Ritik;
    Ritik.setData();
    Ritik.setData();
    employee::getCount();
    Ritik.setData();
    Ritik.getData();
    employee::getCount();
  
    return 0;
}