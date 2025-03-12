#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    //cout<<endl; // принтираме нов ред

    temp = a;
    a = b;
    b = temp;

    /// swap(a, b); -> еквивалентното на редове 10 - 12, т.е. разменя две числа

    cout<<a<<" "<<b;


    return 0;
}
