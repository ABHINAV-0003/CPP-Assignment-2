#include<iostream>
using namespace std;
int reverse(int n,int num){
   
   if(n==0){
    return num;
   }
   else{
    int l=n%10;
    n=n/10;
    num=num*10+l;
    return reverse(n,num);
   }
}
int main(){
int n;
cout<<"Enter the number ";
cin>>n;
cout<<"The reversed number is "<<reverse(n,0);

    return 0;
}