#include <iostream>
#define PI 3.1416
using namespace std;

int main(){
    double r, h;
    cout<<"Input Cone's Radius: ";
    cin>>r;
    cout<<"Input Cone's Height: ";
    cin>>h;

    double volume = (1.0/3)*PI*r*r*h;
    cout<<"The volume of the cone is: "<<volume<<endl;
    return 0;
}