#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input a number: ";
    cin>>n;

    if (n == 0)
    {
        cout<<"Number is Zero";
    }
    else if (n >0)
    {
        cout<<"Number is positive";
    }
    else
    {
        cout<<"Number is negative";
    }    
    return 0;
}