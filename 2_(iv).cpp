#include<iostream>
using namespace std;
int main (){
int n,k,l;
int flag=0;
cout<<"Enter the number of elements in the array: ";
cin>>n;
int arr1[n];
cout<<"Enter the numbers in the array: ";
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
cout<<"The 1D array is: ";
for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
for(int j=2;j<n;j++){
    if(n%j==0){
        k=j;
        l=n/j;
        flag=1;
        break;
    }
}
if(flag==1){
    int arr2[k][l];
    int s=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){ 
        arr2[i][j]=arr1[s];
        s++;
        }
    }
    cout<<"The new two dimensional "<<k<<"*"<<l<< " array is: "<<endl;
   for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){ 
        cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"Conversion to a 2D array is not possible";
}

return 0;
}