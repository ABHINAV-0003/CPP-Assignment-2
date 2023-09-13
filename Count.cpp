#include<iostream>
using namespace std;
int main(){
int a,*ptr,count;
count=0;
int arr[100] = {
    29, 5, 27, 20, 28, 18, 10, 3, 7, 18,
    21, 30, 2, 28, 24, 8, 9, 12, 7, 16,
    25, 23, 11, 19, 9, 20, 19, 27, 27, 10,
    26, 27, 10, 19, 3, 4, 12, 9, 6, 3,
    6, 26, 6, 26, 22, 28, 27, 3, 15, 9,
    17, 19, 9, 1, 2, 28, 2, 25, 3, 14,
    25, 19, 30, 9, 26, 5, 7, 7, 3, 12,
    8, 13, 9, 2, 8, 1, 27, 17, 28, 19,
    12, 27, 13, 21, 14, 6, 6, 26, 3, 27,
    7, 25, 25, 10, 17, 16, 15, 15, 16, 15
    };
ptr=&arr[0];//also ptr=arr can be used;
cout<<"Enter the Number to count: ";
cin>>a;
for(int i=0;i<100;i++){
    if(*ptr==a){
        count++;
    }
    *ptr++;
}
cout<<"The count of the number "<<a<<" in the array is "<<count;
return 0;
}