#include<iostream>
#include<cmath>
using namespace std;
void roots(double a,double b,double c,double *r1,double *r2){
    double d=sqrt(b*b-4*(a*c));
    if(d==0){
        *r1=(-b)/2*a;
        *r2=*r1;
    }
    else{
        *r1=(-b+d)/(2*a);
        *r2=(-b-d)/(2*a);

    }
}
int main() {
   double a,b,c,r1,r2;
   int l=0;
   while(l==0){ 
   cout<<"The Standard form of a Qudadratic Equation is a(x^2)+b(x)+c=0"<<endl
   <<"Where a,b are the coeffiecents of x^2 and x repsectively and c is a constant"<<endl;
cout<<"Enter a ";
cin>>a;
cout<<"Enter b ";
cin>>b; 
cout<<"Enter c ";
cin>>c;
l=1; 
if(b*b - 4*(a*c)<0){
    cout<<"The roots are complex "<<endl;
l=0;
}
   }
 roots(a,b,c,&r1,&r2);
   cout<<"The roots are "<<r1<<" and "<<r2;
    return 0;
}