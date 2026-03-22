/* c++ control structure | these are basic control structure
1- sequennce structure   |
2- selection structure   |
3- loop structure        | */

#include<iostream>
using namespace std;

int main(){
int age;
cout<<"Tell me your age:";
cin>>age;

// selection control structure -If else-if else ladder
// if(age<18){
//     cout<<"You can not come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"you are eligible to come to the party"<<endl;
// }
// else{
//     cout<<"You can come to the party"<<endl;
// }

// selection control structure - switch case statements
switch (age)
{
case 18:
cout<<"You are 18"<<endl;
break;
case 22:
cout<<"You are 22"<<endl;
break;
case 2:
cout<<"You are 2"<<endl;
break;
default:
cout<<"no special cases"<<endl;
break;


}
cout<<"Done with switch case"<<endl;


    return 0;
}