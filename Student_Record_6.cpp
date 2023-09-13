#include<iostream>
using namespace std;
struct Student_Record{
string name;
int rollnum;
double gradesub1,gradesub2,gradesub3,gradesub4,gradesub5;
double finalgrade;
double total;
};
void readgrades(Student_Record &Student){
    
    cout<<"Enter Total Mark: ";
    cin>>Student.total;
    cout<<"Enter Mark of Subject 1: ";
    cin>>Student.gradesub1;
    cout<<"Enter Mark of Subject 2: ";
    cin>>Student.gradesub2;
    cout<<"Enter Mark of Subject 3: ";
    cin>>Student.gradesub3;
    cout<<"Enter Mark of Subject 4: ";
    cin>>Student.gradesub4;
    cout<<"Enter Mark of Subject 5: ";
    cin>>Student.gradesub5;

}
void calculategrade(Student_Record &Student){
    Student.finalgrade=((Student.gradesub1+Student.gradesub2+Student.gradesub3+Student.gradesub4+Student.gradesub5)/(Student.total))*100;
    
    
}
void display(Student_Record Student) {  
 cout<<"Student Name:- "<<Student.name<<endl<<"Roll Number:- "<<Student.rollnum<<
 endl<<"Total Marks: "<<Student.total<<endl<<"Marks in Subject1: "<<Student.gradesub1<<
 endl<<"Marks in Subject2: "<<Student.gradesub2<<endl<<"Marks in Subject3: "<<Student.gradesub3<<
 endl<<"Marks in Subject4: "<<Student.gradesub4<<endl<<"Marks in Subject5: "<<Student.gradesub5<<endl;
 cout<<"The Percentage of marks scored is: "<<Student.finalgrade<<"%"<<endl;
    if(Student.finalgrade>=90){
        cout<<"The Grade Scored is S";
    }
    else if(Student.finalgrade>=80 && Student.finalgrade<90){
        cout<<"The Grade scored is A";
    }
    else if(Student.finalgrade>=70 && Student.finalgrade<80){
        cout<<"The Grade scored is B";
    }
    else if(Student.finalgrade>=60 && Student.finalgrade<70){
        cout<<"The Grade scored is C";
    }
    else if(Student.finalgrade>=50 && Student.finalgrade<60){
        cout<<"The Grade scored is D";
    }
    else if(Student.finalgrade>=40 && Student.finalgrade<50){
        cout<<"The Grade scored is E";
    }
    else{
        cout<<"The Grade scored is F";
    }
    }


int main(){
Student_Record Student;
cout<<"Enter Student Name: ";
cin>>Student.name;
cout<<"Enter Student Roll Number: ";
cin>>Student.rollnum;
readgrades(Student);
calculategrade(Student);
display(Student);
return 0;
}