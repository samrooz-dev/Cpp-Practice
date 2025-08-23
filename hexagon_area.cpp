#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, area;;

    cout<<"Input the side of hexagon: ";
    cin>>a;
    area = ((3*sqrt(3))/2)*a*a;
    cout<<"The area of hexagon is: "<<area<<endl;
    return 0;
}