#include<iostream>
using namespace std;
struct date{
int day;
int month;
int year;
};
struct Student_Record{
    string student_name;
    int rollnum;
    int semester;
    date dob;
};
void display(Student_Record Student) {  
 cout<<"Student Name:- "<<Student.student_name<<endl<<"Roll Number:- "<<Student.rollnum<<endl<<"Semester:- "<<Student.semester
 <<endl<<"Date of Birth "<<Student.dob.day<<"/"<<Student.dob.month<<"/"<<Student.dob.year;
    }
int main(){
Student_Record Student;
int roll,sem,d,m,y;
string name;
cout<<"Enter Student Name"<<endl;
cin>>Student.student_name;
cout<<"Enter Roll Number"<<endl;
cin>>Student.rollnum;
cout<<"Enter Semester"<<endl;
cin>>Student.semester;
cout<<"Enter your date of birth in dd/mm/yyyy format"<<endl;
cout<<"Enter day ";
cin>>Student.dob.day;
cout<<"Enter month ";
cin>>Student.dob.month;
cout<<"Enter year ";
cin>>Student.dob.year;
display(Student);
return 0;
}