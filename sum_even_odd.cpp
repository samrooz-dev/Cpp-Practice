#include <iostream>
using namespace std;


int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int Evensum = 0, Oddsum = 0;
    for (int i = 0; i <8; i++)
    {
        if (arr[i]%2 == 0)
        {
            Evensum += arr[i];
        }
        else
        {
            Oddsum += arr[i];
        }
        
        
    }
    cout<<"The sum of even numbers is: "<<Evensum<<endl;
    cout<<"The sum of Odd numbers is: "<<Oddsum<<endl;
    
    return 0;
}