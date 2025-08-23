#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double p,r,t,A, interest;
    cout<<"Input the principle: ";
    cin>>p;
    cout<<"Input the rate of interest: ";
    cin>>r;
    cout<<"Input the time: ";
    cin>>t;

    A = p * pow(1+r/100,t);

    interest =A -p;

    cout<<"The simple interest for the amount "<<p<<" for "<<t<<" years @"<<r<<"%"<<" is: "<<interest<<endl;
}