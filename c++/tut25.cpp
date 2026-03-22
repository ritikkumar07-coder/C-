#include<iostream>
using namespace std;

class employee{
    int Id;
    int salary;
    public:
        void setId(void){
            cout<<"Enter the Id of the emoloyee:"<<endl;
            cin>>Id;
        }
        void getId(void){
            cout<<"The Id of the employee is "<< Id <<endl;

        }
};

int main(){
    // employee Ritik;
    // Ritik.setId();
    // Ritik.getId();
    employee insta[5];
    for (int i = 0; i < 5; i++)
    {
        insta[i].setId();
        insta[i].getId();
    }
    
    return 0;
}