#include<iostream>
using namespace std;
void swapp(char &a ,char &b){
    char temp=a;
    a=b;
    b=temp;
}
int main() {
char arr[50] = {'o', 'J', 'D', 'n', 'R', '!', '}', 'L', ' ', 'q', 
                'M', 'P', 'w', 'X', 'a', 'k', 'x', 'c', 'k', 'C', 
                'i', 'h', 'e', 'u', 'b', 'd', 'U', 'T', 'N', 'm', 
                'O', '$', 'Q', 'n', 'j', 'l', 'f', 't', 'S', 'A', 
                'r', 'K', 'p', 'Y', 'f', 'B', 'v', 'Z', '@', 'l'};

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
            bool swapped =true;
        }
        }
         if(swapped=false){
            break;
    }
    
}
cout<<"The Bubble Sorted Array is"<<endl;
for(int i=0;i<50;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}