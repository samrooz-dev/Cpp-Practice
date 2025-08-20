#include <iostream>
using namespace std;

int main(){
    double C, F;
    cout<<"Enter the temperature in celsius: ";
    cin>>C;

    F = 9.0/5.0 * C + 32;
    
    cout<<"The Temperature in Farenheit is: "<<F<<endl;
    return 0;
}