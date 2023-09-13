#include<iostream>
using namespace std;
int main(){
int a,b,*p1,*p2;
cout<<"Enter the first number ";
cin>>a;
cout<<"Enter the second number ";
cin>>b;
cout<<"The first number is "<<a<<" and the second number is "<<b<<endl;
//swapping;
p1=&a;
p2=&b;
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
cout<<"Numbers are swapped."<<endl;
cout<<"The first number is now "<<a<<" and the second number is "<<b;
return 0;
}