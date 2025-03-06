#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
//    if(a > b && b > c)
//    {
//        cout<<a;
//    }
//    else if(a > b && a < c)
//    {
//        cout<<c;
//    }
//    else if(b > a && a > c)
//    {
//        cout<<b;
//    }
//    else if(b > a && b < c)
//    {
//        cout<<c;
//    }
//    else if(a > c && c > b)
//    {
//        cout<<a;
//    }
//    else if(a > c && b > a)
//    {
//        cout<<b;
//    }

    if(a > b)
    {
        if(b > c)
        {
            cout<<a;
        }
        else if(a < c)
        {
            cout<<c;
        }
    }
    else if(b > a)
    {
        if(a > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    else if(a > c)
    {
        if(c > b)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }


    return 0;
}
