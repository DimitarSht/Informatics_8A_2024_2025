#include<iostream>
using namespace std;
int main()
{
    int a, n, result = 1;
    cin>>a>>n;

    for(int i = 0; i < n; i++)
    {
        result *= a;
    }

    cout<<result;

//    cout<<pow(a, n);
    /// a^n;


    return 0;
}
