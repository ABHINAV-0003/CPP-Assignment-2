#include<iostream>
using namespace std;
struct Student_Record{
    string student_name;
    int rollnum;
    int semester;
};
int main(){
Student_Record Student;
cout<<"Enter Student Name"<<endl;
cin>>Student.student_name;
cout<<"Enter Roll Number"<<endl;
cin>>Student.rollnum;
cout<<"Enter Semester"<<endl;
cin>>Student.semester;
cout<<"Student Name:- "<<Student.student_name<<endl<<"Roll Number:- "<<Student.rollnum<<endl<<"Semester:- "<<Student.semester;
return 0;
}