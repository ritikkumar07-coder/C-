// ARRAYS 

#include<iostream>
using namespace std;

int main(){
    // Arrays example
    int marks[4] = {24,25,26,56};

    int mathmarks[4];   
    cout<<"these are maths marks"<<endl;
    mathmarks[0] = 234;
    mathmarks[1] = 765;
    mathmarks[2] = 567;
    mathmarks[3] = 345;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    
    // you can change the value of an array
    marks[2] = 123;
    cout<<"these are marks"<<endl;   
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // using for loop:
    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<"The value of the marks "<<i<<" is "<<marks[i]<<endl;
    // }
    int i = 0;
    while(i<4){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    int* p = marks;
      cout<<*(p++)<<endl;
      cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl; 
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;

    return 0;
}