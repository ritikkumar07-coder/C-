// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int a1,int b1,int c1);
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The vlaue of e is "<<e<<endl;

//         }
// };

// void Employee::setData(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }

// int main(){
//     Employee Ritik;
//     // Ritik.a=3; 'a' will never change coz it declared as private.
//     Ritik.d=10;
//     Ritik.e=12;
//     Ritik.setData(1,2,3);
//     Ritik.getData();
//     return 0;
// }

// Q1.Write a C++ Program to Check Whether a Number is a Positive or
// Negative Number.

// #include<iostream>
// using namespace std;

// int main(){
//     double num;
//     cout<<"Enter the number: "<<endl;
//     cin>>num;
//     if(num<0){
//         cout<<"The number is negative."<<endl;
//     }
//     else if(num>0){
//         cout<<"The number is positive."<<endl;
//     }
//     else{
//         cout<<"The number is zero."<<endl;
//     }
//     return 0;
// }

/*Q2.Write a Program to Find the Greatest of the Three Numbers.*/

// #include<iostream>
// using namespace std;

// int main(){
//     double num1,num2,num3;
//     cout<<"Enter three numbers:";
//     cin>>num1>>num2>>num3;

//     double greatest;
//     if(num1 >= num2 && num1 >= num3){
//         greatest = num1;
//     }else if(num2 >= num1 && num2 >= num3){
//         greatest = num2;
//     }else{
//         greatest = num3;
//     }
//     cout<<"The greatest number is:"<<greatest<<endl;

//     return 0;
// }

/*Q3. C++ Program To Check Whether Number is Even Or Odd*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter a number:";
//     cin>>num;
//     if(num %2 == 0){
//         cout<<"The number is Even number."<<endl;
//     }else{
//         cout<<"The number is odd number."<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;

//     // Get character input from the user
//     cout << "Enter a character: ";
//     cin >> ch;

//     // Display ASCII value
//     cout << "The ASCII value of '" << ch << "' is " << int(ch) << endl;

//     return 0;
// }

/* Write a Program to Check Whether a Character is a Vowel or
Consonant*/

// #include<iostream>
// using namespace std;

// int main(){

//     char ch;
//     cout<<"Enter a character:";
//     cin>>ch;
//     if(ch =='a'||ch =='e'||ch=='i'||ch=='o'||ch=='u' ){
//         cout<<ch<<" is a vowel. "<<endl;
//     }else{
//         cout<<ch<<" is a consonent.";
//     }
//     return 0;
// }

/*Write a Program to Print Check Whether a Character is an Alphabet or
Not*/

// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter a character:";
//     cin>>ch;
//     if(isalpha(ch)){
//         cout<<ch<<" is an ALPHABET"<<endl;
//     }else{
//         cout<<ch<<" is not an ALPHABET";
//     }
//     return 0;
// }

/*Write a Program to Count the Number of Vowels */

// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     int vowelcount=0;
//     cout<<"Enter a string:";
//     getline(cin,str);
//     for(char ch:str){
//         ch=tolower(ch);
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             vowelcount++;
//         }
//     }
//     cout<<"Number of vowels:"<<vowelcount<<endl;
//     return 0;
// }

/* Write a Program to Find the Factorial of a Number Using Loops*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     long long factorial=1;
//     cout<<"Enter a number:";
//     cin>>num;
//     if (num<=0){
//         cout<<"factorial is not defined negative number";
//     }else{
//         for(int i=1;i<=num;i++){
//             factorial *=i;
//         }
//         cout<<"factorial of "<<num<<" is"<<factorial<<endl;
//     }
//     return 0;
// }

/*find the output*/
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 3;

//     if (x == 2)
//         cout << "A";
//     else if (x == 5)
//         cout << "B";
//     else if (x == 3)
//         cout << "C";
//     else
//         cout << "D";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     string empName;
//     int empID;
//     float basicSalary;

// public:
//     // Function to take input
//     void getInput() {
//         cout << "Enter Employee Name: ";
//         cin >> empName;
//         cout << "Enter Employee ID: ";
//         cin >> empID;
//         cout << "Enter Basic Salary: ";
//         cin >> basicSalary;
//     }

//     // Function to calculate net salary
//     float calculateSalary() {
//         float HRA = 0.2 * basicSalary;  // 20% House Rent Allowance
//         float DA = 0.5 * basicSalary;   // 50% Dearness Allowance
//         return basicSalary + HRA + DA;  // Net salary
//     }

//     // Function to display employee details
//     void displayDetails() {
//         cout << "\nEmployee Details:\n";
//         cout << "Name: " << empName << endl;
//         cout << "ID: " << empID << endl;
//         cout << "Basic Salary: " << basicSalary << endl;
//         cout << "Net Salary: " << calculateSalary() << endl;
//     }
// };

// int main() {
//     Employee emp;  // Create an object of Employee class
//     emp.getInput();  // Take input
//     emp.displayDetails();  // Display details with salary calculation

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     class Employee{
//     private:
//         string empname;
//         int empID;
//         float basicsalary;
//     }

//     return 0;
// }

/*NESTING MEMBER FUNCTION*/

// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void ones_compliment(void);
//     void display(void);
// };

// void binary ::read(void)
// {
//     cout << "Enter a binary number:" << endl;
//     cin >> s;
// }

// void binary ::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary formate" << endl;
//             exit(0);
//         }
//     }
// }

// void binary ::ones_compliment(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }

// void binary ::display(void)
// {
//     cout << "Displaying your binary number:" << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout << endl;
// }
// int main()
// {
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.display();
//     b.ones_compliment();
//     b.display();

//     return 0;
// }

/*memory allocation*/

// #include <iostream>
// using namespace std;

// class mart
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initcounter(void) { counter = 0; }
//     void setprice(void);
//     void displayPrice(void);
// };

// void mart::setprice(void)
// {
//     cout<<"Enter the id of your item number:"<<counter+1<<endl;
//     cin>>itemId[counter];
//     cout<<"Enter the price of your item:"<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void mart::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout<<"The price of the item with Id " << itemId[i] << " is: "<<itemPrice[i]<<endl;
//     }

// }

// int main()
// {
//     mart dukan;
//     dukan.initcounter();
//     dukan.setprice();
//     dukan.setprice();
//     dukan.setprice();
//     dukan.setprice();
//     dukan.displayPrice();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// /*Static Data Members & Methods in C++ OOPS*/

// class employee
// {
//     int Id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the Id" << endl;
//         cin >> Id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The Id of this employee is " << Id << " and this is emoloyee number " << count << endl;
//     }
// };
// int employee::count;

// int main()
// {
//     employee Ritik;
//     Ritik.setData();
//     Ritik.getData();
//     return 0;

// }

// #include<iostream>
// using namespace std;

// char op;
// int x , y;
// void calculate(char op,int x, int y){
//     if(op=='+'){
//         cout<<"the sum if the numbers is:"<< x+y<<endl;
//     }else if(op=='-'){
//         cout<<"the subtraction of the numbers is:"<<x-y<<endl;
//     }else if(op=='*'){
//         cout<<"the multiplication of the numbers is:"<<x*y<<endl;
//     }else if(op=='/'){
//         cout<<"the division of the numbers is:"<<x/y<<endl;
//     }else{
//         cout<<"this is wrong"<<endl;
//     }
// }

// int main(){

//     cout<<"Enter an operator (-,+,*,/):"<<endl;
//     cin>>op;
//     cout<<"Enter two numbers:"<<endl;
//     cin>>x>>y;

//     calculate(op,x,y);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Engine{
// public:
//     void created(){
//         cout<<"Engine is created"<<endl;
//     }
//     void started(){
//         cout<<"Engine is started"<<endl;
//     }
//     void destroyed(){
//         cout<<"Engine is destroyed"<<endl;
//     }
// };

// class car{
// private:
//     Engine engine;

// public:
//     void createcar(){
//         cout<<"car is being created"<<endl;
//         engine.created();
//     }
//     void startcar(){
//         cout<<"car is starting"<<endl;
//         engine.started();
//     }

// };

// int main(){
//     car mycar;
//     mycar.createcar();
//     mycar.startcar();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Forward declaration
// class complex;

// class calculator {
// public:
//     int add(int a, int b) {
//         return (a + b);
//     }

//     int sumRealComplex(complex, complex);
// };

// class complex {
//     int a, b;

//     // Granting access to specific function
//     friend int calculator::sumRealComplex(complex, complex);

// public:
//     void setnumber(int n1, int n2) {
//         a = n1;
//         b = n2;
//     }

//     void printNumber() {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// // Definition of sumRealComplex
// int calculator::sumRealComplex(complex o1, complex o2) {
//     return (o1.a + o2.a);
// }

// int main() {
//     complex c1, c2;
//     c1.setnumber(1, 4);
//     c2.setnumber(5, 7);

//     calculator calc;
//     int result = calc.sumRealComplex(c1, c2);
//     cout << "Sum of real parts: " << result << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Y;

// class X{
//     int data;
//     public:
//         void setValue(int value){
//             data = value;
//         }
//     friend void add (X , Y);
// };

// class Y{
//     int num;
//     public:
//         void setValue(int value){
//             num = value;
//         }
//         friend void add (X , Y);
// };

// void add(X o1 , Y o2){
//     cout<<"summing data of X and Y object gives me "<<o1.data + o2.num<<endl;
// }

// int main(){

//     X a1;
//     a1.setValue(4);
//     Y b1;
//     b1.setValue(7);
//     add(a1,b1);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     bool c = false;
//     cout << "enter a number:" << endl;
//     int a;
//     cin >> a;
//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             c = true;
//             cout << "this is not a prime number" << endl;
//             break;
//         }
//     }
//     if (!c)
//     {
//         cout << "this number is true";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     bool c = false;
//     cout << "Enter a number:";
//     cin >> num;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << "This is not a prime number." << endl;
//             c = true;
//         }
//         break;
//     }
//     if (!c)
//     {
//         cout << "this is a prime number";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number:" << endl;
//     cin >> num;
//     if (num % 2 == 0)
//     {
//         cout << "This is an even number" << endl;
//     }
//     else
//     {
//         cout << "this is an odd number" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     int id;
//     string name;
//     float marks;

// public:
//     // Constructor
//     Student(int i, string n, float m) {
//         id = i;
//         name = n;
//         marks = m;
//         cout << "Constructor called for " << name << endl;
//     }

//     // Destructor
//     ~Student() {
//         cout << "Destructor called for " << name << endl;
//     }

//     // Method to display details
//     void showDetails() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student s1(101, "Ritik", 88.5);
//     s1.showDetails();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student{
//     private:
//     int id;
//     string name;
//     float marks;
//     public:
//     // constructor
//     student(int i, string n, float m){
//         id = i;
//         name = n;
//         marks = m;
//         cout<<"constructor called for name "<<endl;
//     }
//     // destructor
//     ~student(){
//         cout<<"destructor called for name "<<endl;
//     }

//     void showdetails(){
//         cout<<"ID:"<<id<<endl;
//         cout<<"Name "<<name<<endl;
//         cout<<"Marks "<<marks<<endl;
//     }
// };

// int main(){
//     student s1(227,"Ritik",86.98);
//     s1.showdetails();

//     return 0;
// }

// for single inheritance

// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     void eat(){
//         cout<<"eating..."<<endl;
//     }
// };

// class dog : public animal{
//     public:
//     void bark(){
//         cout<<"barking..."<<endl;
//     }
// };

// int main(){
//     dog d;
//     d.eat();
//     d.bark();

//     return 0;
// }

// for multiple inheritance

// #include<iostream>
// using namespace std;

// class engine{
//     public:
//     void start(){
//         cout<<"engine starting"<<endl;
//     }
// };
// class musicsystem{
//     public:
//     void playmusic(){
//         cout<<"music playing.."<<endl;
//     }
// };
// class car : public engine , public musicsystem{
//     public:
//     void drive(){
//         cout<<"car is moving"<<endl;
//     }
// };

// int main(){
//     car c;
//     c.start();
//     c.playmusic();
//     c.drive();
//     return 0;
// }

// for multilevel inheritance
// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     void eat(){
//         cout<<"eating"<<endl;
//     }
// };
// class dog : public animal{
//     public:
//     void bark(){
//         cout<<"barking"<<endl;
//     }
// };
// class puppy : public dog{
//     public:
//     void weeping(){
//         cout<<"weeping"<<endl;
//     }
// };

// int main(){
//     puppy p;
//     p.eat();
//     p.bark();
//     p.weeping();

//     return 0;
// }

// #include <iostream>

// using namespace std;
// int main()
// {
//     int arr[100];
//     for (int i = 0; i < 100; i++)
//     {
//         arr[i] = i + 1;
//     }
//     cout << "First 10 elements are:\n"
//          << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int num;
//     cout<<"Enter a number to search (1-100):";
//     cin>>num;
//     bool found= false;
//     for(int i=0; i<100; i++){
//         if(arr[i]== num){
//             found = true;
//             break;
//         }
//     }
//     if(found){
//         cout<<"Number" <<num<<" is found in the array."<<endl;
//     }else{
//         cout<<"Number "<<num<<" is not found in the array."<<endl;
//     }
//     return 0;
// }
// #include <array>
// #include<iostream>
// using namespace std;

// int main(){
//     array<int,5> arr = {1,2,3,4,5};
//     cout<<arr[10];
// }


    
#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    // Input first matrix
    cout << "Enter elements of first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Adding the matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Printing the result
    cout << "Resultant Matrix (A + B):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




























