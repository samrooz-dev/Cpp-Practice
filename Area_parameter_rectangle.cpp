#include <iostream>
using namespace std;

int main(){
    int l,w;
    double area, parameter;
    cout<<"Enter The length: ";
    cin>>l;
    cout<<"Enter The width: ";
    cin>>w;
    area = l*w;
    parameter = 2*(l+w);
    cout<<"The area of a rectangle is: "<<area<<endl;
    cout<<"The parameter of a rectangle is: "<<parameter<<endl;
    return 0;
}