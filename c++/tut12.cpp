// POINTER
// wahat is pointer?-----> data type which holds the address of other data types

#include<iostream>
using namespace std;

int main(){
    int a=3;
    int*b;
    b = &a;
     
    // & ---> (Address of) operator    
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of b is: "<<b<<endl; 

    // * ---> (value at) Derefrence operator
    cout<<"the value at address b is: "<<*b<<endl;
    
    // pointer to pointer(ek aisa pointer jo pointer ke value ko store krta hai)
    int** c=&b;
    cout<<"the address of b is: "<<&b<<endl;
    cout<<"the address of b is: "<<c<<endl;
    cout<<"the value at address c is: "<<*c<<endl;
    cout<<"the value at address value_at(0value_at(c)) is: "<<**c<<endl;
    return 0;
}