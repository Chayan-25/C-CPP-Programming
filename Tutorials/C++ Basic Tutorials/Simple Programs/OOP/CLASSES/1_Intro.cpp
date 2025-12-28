// This is introduction to classes: 
#include<iostream>
#include<string>
using namespace std;
// So What is Class? 
/*
A class is a user defined data structure which allows user to use it multiple times and better memory allocation
*/
/*
Before learning about class there are 3 types of Access modifier in C++
1. private: We can't access these data outside of that class
2. Protected: We Can't access these data outside of classes like we can access this from other class 
but can't from main function
3. public: We can access those from anywhere
** By default access modifier is : private inside a class
*/
class Student{
string name;
int age;
public: 
void takedata(){
    string n;
    int a;
    cout<<"Enter name of the student: "<<endl;
    getline(cin,n);
    cout<<"Enter age: "<<endl;
    cin>>a;
    name = n;
    age = a;
}
void showdetails(){
    cout<<"Name of the students is: "<<name<<endl
        <<"Age of the students is: "<<age<<endl;
}
};

int main(){
Student Alex;
Alex.takedata();
Alex.showdetails();     
     return 0;
}