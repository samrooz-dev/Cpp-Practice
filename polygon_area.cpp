#include <iostream>
#include <cmath>
#define PI 3.1416
using namespace std;

int main(){
    double a,n, area;;

    cout<<"Input the numbers of sides of polygon: ";
    cin>>n;
    cout<<"Input the length of each side of polygon: ";
    cin>>a;
    area = (n*a*a)/(4*tan(PI/n));
    cout<<"The area of plygon is: "<<area<<endl;
    return 0;
}