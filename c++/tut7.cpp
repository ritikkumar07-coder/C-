#include<iostream>
using namespace std;

int c = 45;  //global variable
int main(){
// ************Build in data types******************

// int a,b,c;
//  cout<<"Enter the value of a:"<<endl;
//  cin>>a;
//  cout<<"Enter the value of B:"<<endl;
//  cin>>b;
// c = a + b;
//  cout<<"The sum is:"<<c<<endl;
//  cout<<"The global c is:"<<::c;   //:: is called scope resolution operator 

// **********float,double and long double Literals*************
// float d= 43.4f;
// long double e= 43.4l;

// cout<<"the value of float is "<<d<<endl<<"the value of long double is "<<e<<endl;
// cout<<"The size of 43.4 is "<<sizeof(43.4)<<endl;
// cout<<"The size of 43.4f is "<<sizeof(43.4f)<<endl;
// cout<<"The size of 43.4l is "<<sizeof(43.4l)<<endl;
// cout<<"The size of 43.4F is "<<sizeof(43.4F)<<endl;
// cout<<"The size of 43.4L is "<<sizeof(43.4L)<<endl;

// **********Refrence variables************
// subnames of name like --> rahul-->monty-->duggu

// float x = 333;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;

// *********Typecasting******** (conversion of one data type to another)

int a = 45; 
float b = 45.6;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float(a)<<endl;

cout<<"The value of a is "<<(int)b<<endl;
cout<<"The value of a is "<<int(b)<<endl;
int c = int(b);

cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b <<endl; 



return 0;
}