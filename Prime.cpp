#include<iostream>
using namespace std;
bool prime(int n){
    int k=0;
   for(int i=1;i<=n;i++){
    if(n%i==0){
        k++;
    }
   }
   if(k==2){
    return true;
   }
   else{
    return false;
   }
  
}
int main(){
int num;
cout<<"Enter the number ";
cin>>num;
cout<<"The prime numbers less than "<<num<<" are: ";
for(int j=1;j<num;j++){
    if(prime(j)){
        cout<<j<<" ";
    }
}
    return 0;
}