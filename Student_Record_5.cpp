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
 <<endl<<"Date of Birth "<<Student.dob.day<<"/"<<Student.dob.month<<"/"<<Student.dob.year<<endl;
    }
void swapp(Student_Record &Student1 ,Student_Record &Student2){
    Student_Record temp=Student1;
    Student1=Student2;
    Student2=temp;
}

int main() {
Student_Record Student[10];
int roll,sem,d,m,y;
string name;
for(int i=0;i<10;i++){ 
cout<<"Enter Student Name"<<endl;
cin>>Student[i].student_name;
cout<<"Enter Roll Number"<<endl;
cin>>Student[i].rollnum;
cout<<"Enter Semester"<<endl;
cin>>Student[i].semester;
cout<<"Enter the date of birth in dd/mm/yyyy format"<<endl;
cout<<"Enter day ";
cin>>Student[i].dob.day;
cout<<"Enter month ";
cin>>Student[i].dob.month;
cout<<"Enter year ";
cin>>Student[i].dob.year;
}
//Sorting
bool swapped=false;
for(int i=0;i<10;i++){
    for(int j=0;j<9;j++){
        if(Student[j].student_name>Student[j+1].student_name){
            swapp(Student[j],Student[j+1]);
            
            swapped =true;
        }
        
        }
        if(swapped==false){
            break;
    }
    
}
for(int i=0;i<10;i++){ 
 display(Student[i]);
}
return 0;
}