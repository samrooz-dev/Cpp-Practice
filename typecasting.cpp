#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    cout<<"Test Explicit Casting: "<<endl;
    int i1 = 4, i2 = 8;

    cout<<fixed<<setprecision(1);
    cout<<i1/i2<<endl;
    cout<<(double)i1/i2<<endl;
    cout<<i1/(double)i2<<endl;
    cout<<(double)(i1/i2)<<endl;

    double d1 = 5.5, d2 = 6.6;

    cout<<"Test Implicit Typecasting: "<<endl;
    cout<<(int)d1/i2<<endl;
    cout<<(int)(d1/i2)<<endl;

    cout<<"Test Implicity cast truncates int into double: "<<endl;
    d1 = i1;
    cout<<d1<<endl;

    cout<<"Test implicity cast truncates double into int: "<<endl;
    i2 = d2;
    cout<<i2<<endl;
    return 0;
}