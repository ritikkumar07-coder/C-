#include<iostream>
using namespace std;

/*RECURSION AND FIBONACCI SERIES AND RECURSIVE FUNCTION*/

// Recursion is when a function calls itself to solve a problem in smaller steps.
//  Think of it like breaking a big problem into smaller pieces until it becomes easy to solve.

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+ fib(n-1);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is " <<factorial(a)<<endl;
    cout<<"The term i fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}