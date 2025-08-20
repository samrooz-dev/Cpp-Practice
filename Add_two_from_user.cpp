#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping the 1st number is: "<<a<<endl;
    cout<<"After swapping the 2nd number is: "<<b<<endl;
    return 0;
}