#include<iostream>
using namespace std;
int main()
{
    int MAX = INT_MIN;
    long long MIN = INT_MAX;
    long long number;

    for( ; ; )
    {
        cin>>number;
        if(number == 0)
        {
            cout<<MIN<<" "<<MAX;
            break;
        }
        else
        {
            if(number < MIN)
            {
                MIN = number;
            }
            if(number > MAX)
            {
                MAX = number;
            }
        }
    }


    return 0;
}


