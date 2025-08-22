#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t t = time(0);
    tm* ptr = localtime(&t);
    cout<<"Seconds: "<<ptr->tm_sec<<endl;
    cout<<"Minutes: "<<ptr->tm_min<<endl;
    cout<<"hours: "<<ptr->tm_hour<<endl;
    cout<<"day of month: "<<ptr->tm_mday<<endl;
    cout<<"month of year: "<<ptr->tm_mon<<endl;
    cout<<"Year: "<<(ptr->tm_year)+1900<<endl;
    cout<<"weekday: "<<ptr->tm_wday<<endl;
    cout<<"day of year: "<<ptr->tm_yday<<endl;
    cout<<"daylight savings: "<<ptr->tm_isdst<<endl;
    cout<<"current date: "<<ptr->tm_mday<<"/"<<ptr->tm_mon<<"/"<<(ptr->tm_year)+1900<<endl;
    cout<<"Current Time: "<<ptr->tm_hour<<":"<<ptr->tm_min<<":"<<ptr->tm_sec<<endl;
    return 0;
}
