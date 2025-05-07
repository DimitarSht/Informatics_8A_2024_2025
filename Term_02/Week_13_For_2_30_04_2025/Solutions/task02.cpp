#include<iostream>
using namespace std;
int main()
{
    int n, suma = 0;
    int digit;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j != 0; )
        {
            digit = j % 10;
            cout<<digit<<" ";
            suma += digit;
            j /= 10;
        }
    }
    cout<<suma;
    return 0;
}
