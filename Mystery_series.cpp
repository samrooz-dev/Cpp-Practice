#include <iostream>
using namespace std;

int main(){
    int n = 1;

    while (true)
    {
        ++n;
        if (n == 50)
        {
            break;
        }
        else if (n % 3 == 0)
        {
            continue;
        }
        else if (n % 2 == 0)
        {
            n +=3;
        }
        else
        {
            n-=3;
        }
    cout<<n<<"\t";
    }
    
    return 0;
}