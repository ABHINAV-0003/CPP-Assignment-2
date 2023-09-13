#include<iostream>
using namespace std;
void swapp(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
int arr[50] = {
        24, 6, 8, 32, 50, 14, 20, 18, 45, 26,
        10, 36, 3, 28, 13, 43, 17, 4, 19, 34,
        11, 22, 49, 47, 31, 16, 41, 15, 1, 38,
        37, 5, 30, 27, 42, 9, 23, 40, 29, 7,
        35, 33, 2, 48, 25, 39, 46, 21, 44, 12
    };
    cout<<"The unsorted array is"<<endl;
for(int i=0;i<50;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
 bool swapped=false;
for(int i=0;i<50;i++){
    for(int j=0;j<49;j++){
        if(arr[j]>arr[j+1]){
            swapp(arr[j],arr[j+1]);
            swapped =true;
        }
        
        }
        if(swapped==false){
            break;
    }
    
}
cout<<"The Bubble Sorted Array is"<<endl;
for(int i=0;i<50;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}