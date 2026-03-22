#include<iostream>
using namespace std;


// INLINE FUNCTION ----> An inline function in C++ is a function that is expanded in place, at the point where it is called, 
// rather than being invoked through the normal function call mechanism. When a function is declared as inline.

inline int product(int a , int b){ 
    int c = a*b;
    return c;
}
float moneyRecived(int currentMoney,float factor = 1.04){
    return currentMoney * factor;
}
int main(){
    int a , b;
    // cout<<"Enter the vlaue of a and b: ";
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
   int money = 100000;
   cout<<"If you have "<<money<<"Rs in your bank account, you will recive "<<moneyRecived(money)<<"Rs after 1 year"<<endl;
   cout<<"FOR VIP: If you have "<<money<<"Rs in your bank account, you will recive "<<moneyRecived(money,1.4)<<"Rs after 1 year";
    return 0;
}


