#include<iostream>
using namespace std;
int main(){
int n,sum1,sum2;
sum1=0;
sum2=0;
int count=0;
//Square Matrix Order
cout<<"Enter the order of the Square Matrices: ";
cin>>n;
int arr1[n][n],arr2[n][n];
int arr3[n][n]={0};
int arr4[n][n]={0};
//Matrix1 Input
cout<<"Enter the first matrix A"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<"Enter the element at row "<<i+1<<" and column "<<j+1<<": ";
    cin>>arr1[i][j];
    }
}
//Matrix2 Input
cout<<"Enter the second matrix B"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<"Enter the element at row "<<i+1<<" and column "<<j+1<<": ";
    cin>>arr2[i][j];
    }
}
//Matrix1 Output
cout<<"The first matrix is "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr1[i][j]<<"  ";
    }
    cout<<endl;
}
//Matrix2 Output
cout<<"The second matrix is "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr2[i][j]<<"  ";
    }
     cout<<endl;
}
//Matrix1*Matrix2
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sum1=0;
        for(int k=0;k<n;k++){ 
        sum1=sum1+arr1[i][k]*arr2[k][i];
    }
    
    arr3[i][j]=sum1;
    }
}
//Matrix2*Matrix1
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sum2=0;
        for(int k=0;k<n;k++){ 
        sum2=sum2+arr2[i][k]*arr1[k][i];
    }
    arr4[i][j]=sum2;
    }
}
//Commutativity Checking
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr3[i][j]==arr4[i][j]){
            count++;
        }
    }
}
//Matrix A x Matrix B
cout<<"The product A*B is "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr3[i][j]<<"  ";
    }
    cout<<endl;
}
//Matrix B x Matrix A
cout<<"The product B*A is "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<arr4[i][j]<<"  ";
    }
    cout<<endl;
}
//Result
if(count==n*n){
    cout<<"The matrix multiplication is commutative";
}
else{
    cout<<"The matrix multiplication is not commutative";
}
return 0;
}