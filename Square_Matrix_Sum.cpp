#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,j,i;
    int rowmax=-2147483648,columnmax= -2147483648; //INT_IN

    int row=0,column=0,diagonal=0,antidiagonal=0;
    cout<<"Enter the Order of the Square Matrix ";
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the element at row "<<i+1<<" and column "<<j+1<<endl;
            cin>>arr[i][j];
        }

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;

    }
    for(i=0;i<n;i++){
        row=0;
        column=0;
        for(j=0;j<n;j++){
            row=row+arr[j][i];
            column=column+arr[i][j];
            if(i==j){
                diagonal=diagonal+arr[i][j];
            }
            if(i+j==n-1){
                antidiagonal=antidiagonal+arr[i][j];
            }
        }
        cout<<"The sum of elements in Column "<<i+1<<" is "<<row<<endl;
        cout<<"The sum of elements in Row "<<i+1<<" is "<<column<<endl;
        rowmax=max(row,rowmax);
        columnmax=max(column,columnmax);
    }
    cout<<"The sum of the elements in the Main Diagonal is "<<diagonal<<endl;
    cout<<"The sum of the elements in the Anti Diagonal is "<<antidiagonal<<endl;
    int c=max(rowmax,columnmax);
    int d=max(diagonal,antidiagonal);
    cout<<"The maximum sum is "<<max(c,d);
return 0;
}