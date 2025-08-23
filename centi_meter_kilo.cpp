#include <iostream>
using namespace std;

int main(){
    double centi, meter, kilo;

    cout<<"Input the distance in centimeters: ";
    cin>>centi;
    meter = centi/100;
    kilo = centi/100000;

    cout<<"The distance in meters is: "<<meter<<endl;
    cout<<"The distance in kilometers is: "<<kilo<<endl;
    return 0;
}