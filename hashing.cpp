#include<iostream>
using namespace std;
int main() {
int arr[50]={
        1, 1, 1, 1, 1,
        2, 2, 2, 2,
        3, 3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8,
        9, 9,
        10, 10
    };
//HASHING
int hash[10]={0};
for(int i=0;i<50;i++){
    hash[arr[i]]++;
}
//Frequency
for(int i=1;i<10;i++){
    cout<<"The frequency of the number "<<(i)<<" is "<<hash[i]<<endl;
}
    return 0;
}