#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;
    double sum, average;
    cout<<"Enter the first two number (separated by space): ";
    cin>>a>>b;
    cout<<"Enter the last two number (separated by space): ";
    cin>>c>>d;
    sum = a+b+c+d;
    average = sum/4;

    cout<<"The total of four numbers is: "<<sum<<endl;
    cout<<"The Average of 4 numbers is: "<<average<<endl;

    return 0;
}