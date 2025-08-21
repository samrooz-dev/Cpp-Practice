#include <iostream>
using namespace std;

int main(){
    double F, C;
    cout<<"Enter the temperature in Farenheit: ";
    cin>>F;
    C = (F-32)*5.0/9.0;

    cout<<"The temperature in Celsius is: "<<C<<endl;

    return 0;
}