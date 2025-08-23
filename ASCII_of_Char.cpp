#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Input a character: ";
    cin>>c;

    cout<<"The ASCII value of "<<c<<" is: "<<(int)c<<endl;
    cout<<"The character for the ASCII value "<<(int)c<<" is: "<<c<<endl;
    return 0;
}