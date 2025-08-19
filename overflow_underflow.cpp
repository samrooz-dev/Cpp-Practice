#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n1 = INT_MAX;
    cout<<"overflow the integer range: "<<n1+1<<endl;
    cout<<"Increasing from its minimum range: "<<n1+2<<endl;
    cout<<"Product is: "<<n1*n1<<endl;

    int n2 = INT_MIN;
    cout<<"Underflow the integer range: "<<n2-1<<endl;
    cout<<"Decreasing from its minimum range: "<<n2-2<<endl;
    cout<<"Product is: "<<n2*n2<<endl;
    return 0;
}