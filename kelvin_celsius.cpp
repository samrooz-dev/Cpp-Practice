#include <iostream>
using namespace std;

int main(){
    double K, C;
    cout<<"Input the temperature in kelvin: ";
    cin>>K;

     C = K-273.15;

    cout<<"The temperature in celsius is: "<<C<<endl;
    return 0;
}