#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double s, area;
    cout<<"Input the length of the side: ";
    cin>>s;
    area = (sqrt(3)/4.0)*s*s;

    cout<<"The area of equilateral reiangle is: "<<area<<endl;
    return 0;
}