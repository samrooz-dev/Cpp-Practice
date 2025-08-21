#include <iostream>
using namespace std;

int main(){
    double F, K;
    cout<<"Enter the temperature in Farenheit: ";
    cin>>F;
    K = (F-32)*5.0/9.0 +273.15;

    cout<<"The temperature in Celsius is: "<<K<<endl;

    return 0;
}