#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double pi = 3.14159265;

    cout<<fixed<<setprecision(4);
    cout<<"The value of PI is: "<<pi<<endl;

    cout<<"The value of pi 4 decimal place of total width 8: "<<"|"<<setw(8)<<pi<<"|"<<endl;
    cout<<"The value of pi 4 decimal place of total width 10: "<<"|"<<setw(10)<<pi<<"|"<<endl;
    cout<<setfill('-');
    cout<<"The value of pi 4 decimal place of total width 8: "<<"|"<<setw(8)<<pi<<"|"<<endl;
    cout<<"The value of pi 4 decimal place of total width 10: "<<"|"<<setw(10)<<pi<<"|"<<endl;
    cout<<scientific;
    cout<<"The value of pi in scientific format is: "<<pi<<endl;

    bool d = false;
    cout<<"Status in number: "<<d<<endl;
    cout<<boolalpha;
    cout<<"Status in alphabet: "<<d<<endl;
}