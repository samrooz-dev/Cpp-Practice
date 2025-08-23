#include <iostream>
using namespace std;

int main(){
    double kilo, miles;
    cout<<"Enter the distance in kilometers: ";
    cin>>kilo;

    miles = kilo * 0.621371;

    cout<<"The distance in miles is: "<<miles<<endl;
}