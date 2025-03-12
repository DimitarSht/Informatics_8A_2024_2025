#include<iostream>
using namespace std;
int main()
{
//    if(<условие 1>)
//    {
//        <код, ако условие 1 е вярно>
//    }
//    else if(<условие 2>)
//    {
//        <код, ако условие 2 е вярно и
//        условие 1 НЕ е вярно>
//    }
//    else
//    {
//        <код, ако горните две условия НЕ
//        са верни>
//    }
    int a, b;
    cin>>a>>b;
    cin>>a;
    cin>>b;
    if(a==b)
    {
        a=0;
        b=0;
    }
    else
    {
        a=a+b;
        b=a;
    }
    cout<<a<<" "<<b;

    cout<<a;
    cout<<" ";
    cout<<b;

    return 0;
}
