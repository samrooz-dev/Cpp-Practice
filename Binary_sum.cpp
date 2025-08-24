#include <iostream>
using namespace std;

int main(){
    long b1, b2;
    int r = 0, i = 0;
    int sum[20];
    cout<<"Input the 1st binary number: ";
    cin>>b1;
    cout<<"Input the 2nd binary number: ";
    cin>>b1;

    while (b1 != 0 || b2 != 0)
    {
        sum[i++] = (int)((b1%10 + b2%10 + r)%2);
        r = (int)((b1%10 + b2%10 + r)/2);
        b1 /=10;   
        b2 /=10;   
    }

    if (r != 0)
    {
        sum[i++] = r;
    }
    --i;
    while (i >=0)
    {
        cout<<sum[i--];
    }
    cout<<endl;
    
    return 0;
}