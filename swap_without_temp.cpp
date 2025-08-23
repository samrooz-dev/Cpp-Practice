#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Input 1st number: ";
    cin>>a;
    cout<<"Input 2nd number: ";
    cin>>b;
    swap(a,b);

    cout<<"Numbers after swapping is: "<<a<<" "<<b<<endl;
    
    return 0;
}