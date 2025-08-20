#include <iostream>
using namespace std;
#define PI 3.1416

int main(){
    int r, h;
    double volume;
    cout<<"Enter The Radius: ";
    cin>>r;
    cout<<"Enter The Height: ";
    cin>>h;
    volume = PI*r*r*h;
    cout<<"The volume of a sphere is: "<<volume<<endl;
    return 0;
}