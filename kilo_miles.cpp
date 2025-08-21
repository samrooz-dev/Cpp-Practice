#include <iostream>
using namespace std;

int main(){
    double kilo, miles;

    cout<<"Input the distance in kilometers: ";
    cin>>kilo;

    miles = kilo * 0.621371;

    cout<<"The "<<kilo<<"Km./hr. means "<<miles<<" Miles/hr."<<endl;
    return 0;
}