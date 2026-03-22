#include<iostream>
using namespace std;

// function overloading
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"The sum of 3 , 4 and 7 is : "<<add(3,4,7);
    return 0;
}