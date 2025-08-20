#include <iostream>
using namespace std;
#define PI 3.1416

int main(){
    int r;
    double volume;
    cout<<"Enter The Radius: ";
    cin>>r;
    volume = 4.0/3.0 * PI *r*r*r;
    cout<<"The volume of a sphere is: "<<volume<<endl;
    return 0;
}