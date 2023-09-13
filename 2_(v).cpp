#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"Enter n ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<"0  ";
            }
            else if(i>j){
                cout<<"1   ";
            }
            else{
                cout<<"-1  ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}