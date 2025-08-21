#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Input the 1st angle of a triangle: ";
    cin>>a;
    cout<<"Input the 2nd angle of a triangle: ";
    cin>>b;

    c = 180 -(a+b);
    cout<<"The 3rd angle of triangle is: "<<c<<endl;

    return 0;
}