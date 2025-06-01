#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    if(a < b)
    {
        swap(a, b);
    }

    /*for(int i = a; i > 0; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            cout<<i<<endl;
            break;
        }
    }
    int ostatak;
    for( ; b != 0; )
    {
        ostatak = a % b;
        a = b;
        b = ostatak;
    }
    cout<<a<<endl;*/

    int n, cnt = 0;
    cin>>n;
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    if(cnt == 0)
    {
        cout<<"prosto e";
    }

    return 0;
}
