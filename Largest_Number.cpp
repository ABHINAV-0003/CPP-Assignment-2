#include<iostream>
using namespace std;
int main(){
int a,b,c,*p1,*p2,*p3;
cout<<"Enter the first number ";
cin>>a;
cout<<"Enter the second number ";
cin>>b;
cout<<"Enter the third number ";
cin>>c;
p1=&a;
p2=&b;
p3=&c;
if(*p1>*p2 && *p1>*p3){
    cout<<"The largest number is "<<*p1;
}
else if(*p2>*p1 && *p2>*p3){
    cout<<"The largest number is "<<*p2;
}
else{
    cout<<"The largest number is "<<*p3;
}
return 0;
}