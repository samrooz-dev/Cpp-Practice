#include <iostream>
using namespace std;

int main(){
    double K, F;
    cout<<"Input the temperature in kelvin: ";
    cin>>K;

    F = (K-273.15) * 9.0/5.0 +32;

    cout<<"The temperature in Farenheit is: "<<F<<endl;
    return 0;
}