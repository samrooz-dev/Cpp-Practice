#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, digits, first, last, a, b, nn;
    cout<<"Input any number: ";
    cin>>n;

    digits = (int)log10(n);
    first = n/pow(10,digits);
    last = n%10;

    a = first * (pow(10,digits));
    b = n%a;
    n = b/10;

    nn = last * (pow(10, digits)) + (n * 10 +first);
    cout<<"New number after swapping first and last integer is: "<<nn<<endl;
    return 0;
}