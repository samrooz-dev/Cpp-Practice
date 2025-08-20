#include <iostream>
#include <cmath>
using namespace std;


int main(){
float a,b,c;
double s, area;
cout<<"Input the length of a 1st side of a triangle: ";
cin>>a;
cout<<"Input the length of a 2nd side of a triangle: ";
cin>>b;
cout<<"Input the length of a 3rd side of a triangle: ";
cin>>c;
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"The area of a triangle is: "<<area;
    return 0;
}