#include<iostream>
#include<iomanip>
using namespace std;
int nCr(int n,int r){ //nCr calculator
int re=1;
for(int i=0;i<r;i++){
re=re*(n-i);
re=re/(i+1);
} 
return re;
}
void pascaltriangle(int n){ 
   int arr[n][n];
   for(int i=1;i<n;i++){
    for(int k=i;k<n;k++){
        cout<<setw(3)<<" ";
    }

    for(int j=1;j<=i;j++){
        arr[i][j]=nCr(i-1,j-1);
       
        cout<<setw(6)<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}


int main(){
int n;
cout<<"Enter the number of rows ";
cin>>n;
pascaltriangle(n);
return 0;
}