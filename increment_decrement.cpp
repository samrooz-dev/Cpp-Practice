#include <iostream>
using namespace std;

int main(){
    int n = 57;
    cout<<"The number is: "<<n<<endl;
    n++;
    cout<<"After Post increment: "<<n<<endl;
    ++n;
    cout<<"After Pre increment: "<<n<<endl;
    n+=1;
    cout<<"After increasing by 1: "<<n<<endl;
    n--;
    cout<<"After Post decrement: "<<n<<endl;
    --n;
    cout<<"After Pre decrement: "<<n<<endl;
    n-=1;
    cout<<"After decreasing by 1: "<<n<<endl;
    return 0;
}