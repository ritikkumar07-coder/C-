// There are two types of header files:
// System header files: it comes with the compiler
#include<iostream>
// user defined header files: it is written by the programmer
// #include"this.h" //--> This will produce an error if this.h is not present in the current directory or files. 

using namespace std;

int main(){
     int a = 5 , b = 6;
    cout<<"following are the types of operators in c++"<<endl;
    //Arithmetic operator
   cout<<"the value of a + b is "<<a+b<<endl;
   cout<<"the value of a - b is "<<a-b<<endl;
   cout<<"the value of a * b is "<<a*b<<endl;
   cout<<"the value of a / b is "<<a/b<<endl;
   cout<<"the value of a % b is "<<a%b<<endl;
   cout<<"the value of a ++ is "<<a++<<endl;
   cout<<"the value of a -- is "<<a--<<endl;
   cout<<"the value of -- a is "<<--a<<endl;
   cout<<"the value of ++ a is "<<++a<<endl;
   cout<<endl;

// Assignment operators --> used to assign values to variables
// int a = 4 , b = 5;
// char d = 'd';


// Comparison operators
cout<<"following are the comparison operators in c++"<<endl;
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<endl;

// logical operators
cout<<"following are the logical opertors in c++"<<endl;
cout<<"The value of logical and operators ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
cout<<"The value of logical or operators ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
cout<<"The value of logical not operators (!(a==b)) is "<<(!(a==b))<<endl;


    return 0;
}