#include<iostream>
using namespace std;
int main()
{
    int a = INT_MAX, b = INT_MIN;


    if(a < b)
    {
        swap(a, b);
    }

    for(int i = 1; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            cout<<i<<endl;
            break;
        }
    }

    for(int i = 1; ; i++)
    {
        if((a * i) % b == 0)
        {
            cout<<a*i<<endl;
            break;
        }
    }

    return 0;
}
