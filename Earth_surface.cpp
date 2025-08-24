#include <iostream>
#include <cmath>
#define PI 3.1416
using namespace std;


int main(){
    double la1,lo1,la2,lo2, d, a, c, ladiff,lodiff;
    cout<<"Input the latitude of coordinate 1: ";
    cin>>la1;
    cout<<"Input the longitude of coordinate 1: ";
    cin>>lo1;
    cout<<"Input the latitude of coordinate 2: ";
    cin>>la2;
    cout<<"Input the longitude of coordinate 2: ";
    cin>>lo2;

    la1 = la1 * PI/180;
    lo1 = lo1 * PI/180;
    la2 = la2 * PI/180;
    lo2 = lo2 * PI/180;

    ladiff = la2-la1;
    lodiff = lo2-lo1;

    double er = 6371;

    a = pow(sin(ladiff/2),2) + cos(la1) * cos(la2) * pow(sin(lodiff/2), 2);
    c = 2 * asin(sqrt(a));
    d = er * c;

    cout<<"The distance between those points is: "<<d<<endl;
    return 0;
}

