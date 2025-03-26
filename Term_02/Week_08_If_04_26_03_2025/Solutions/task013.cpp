#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    bool isRAT = false;
    bool isTriangle = false;

    if(a < b + c && b < a + c && c < a + b)
    {
        if(a*a + b*b == c*c)
        {
            cout<<a*b/2;
        }

    }




    return 0;
}
