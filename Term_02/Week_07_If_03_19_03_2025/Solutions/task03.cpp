#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int newNum1, newNum2;
    newNum1 = num/1000*10 + num % 10;
    newNum2 = num/100%10*10  + num/10%10;

    cout<<newNum1<<" "<<newNum2<<endl;
    if(newNum1 < newNum2)
    {
        cout<<newNum1<<"<"<<newNum2<<endl;
    }
    else if(newNum1 > newNum2)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
