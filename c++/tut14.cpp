#include<iostream>
using namespace std;

// WHAT IS STRUCTURE....
// struct engineering
// {
//     int id;
//     string name;
//     char favChar;
//     float sallary;
//     // also we can use typedef for shortcut using typedef istead of struct
// };

// int main(){
//     struct engineering ritik;
//     ritik.id = 1;
//     ritik.favChar = 'R';
//     ritik.name = "Ritik kumar";
//     ritik.sallary = 1200000;
//     cout<<ritik.id<<endl;
//     cout<<ritik.favChar<<endl;
//     cout<<ritik.name<<endl;
//     cout<<ritik.sallary<<endl;
//     return 0;
// }


// what is union...
// This means that at any given time, a union can store only one of its members, 
// and its size is determined by the largest member.

union money
{
    int rice;
    char car;
    float pounds;

};

int main(){
    union ritik;
    union money m1;
    m1.rice = 07;
    m1.car = 'c';
    cout<<m1.car<<endl;
    return 0;
}









