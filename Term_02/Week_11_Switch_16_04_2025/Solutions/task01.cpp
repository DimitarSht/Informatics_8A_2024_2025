#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int ostatak = year % 4;
    switch(ostatak)
    {
    case 0:
        cout<<"Visokosna e!"<<endl;
        break;
    default:
        cout<<"Ne e visokosna!"<<endl;
        break;
    }

    return 0;
}


