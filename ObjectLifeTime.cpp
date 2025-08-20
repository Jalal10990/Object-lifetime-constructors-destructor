
#include<iostream>
using namespace std;

class Student{
    int id;
    public:
    Student() : id(0) {
        cout<< "default constructor = "<<id<<endl;
    }
     Student(int id) : id(id){
        cout<<"constructor id =" <<id<<endl;

    }
    ~Student(){
        cout<<"Distroyed id = "<<id<<"\n";
    }
};
int main(){
    Student a; //default constructor
    
     Student b(12);   //parameterized constructor
    

}