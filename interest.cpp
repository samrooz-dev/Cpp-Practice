#include <iostream>
using namespace std;

int main(){
    double p,r,t, interest;
    cout<<"Input the principle: ";
    cin>>p;
    cout<<"Input the rate of interest: ";
    cin>>r;
    cout<<"Input the time: ";
    cin>>t;

    interest =(p*r*t)/100;

    cout<<"The simple interest for the amount "<<p<<" for "<<t<<" years @"<<r<<"%"<<" is: "<<interest<<endl;
}