#include <iostream>
using namespace std;


int main(){
    int n, m, sum = 0;
    cout<<"Enter 1st number: ";
    cin>>n;
    cout<<"Enter 2nd number: ";
    cin>>m;

    for (int i = n; i <=m; i++)
    {
        sum+=i;
    }
    cout<<"Sum between "<<n<<" and "<<m<<" is: "<<sum<<endl;
    
    return 0;
}