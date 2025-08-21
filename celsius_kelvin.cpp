#include <iostream>
using namespace std;

int main(){
    double K, C;
    cout<<"Input the temperature in Celsius: ";
    cin>>C;

     K = C+273.15;

    cout<<"The temperature in kelvin is: "<<K<<endl;
    return 0;
}