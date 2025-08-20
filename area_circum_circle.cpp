#include <iostream>
using namespace std;
#define PI 3.1416

int main(){
    int r;
    double area, circum;
    cout<<"Enter The Radius: ";
    cin>>r;
    area = PI *r*r;
    circum = 2*PI*r;
    cout<<"The area of a circle is: "<<area<<endl;
    cout<<"The circumference of a circle is: "<<circum<<endl;
    return 0;
}