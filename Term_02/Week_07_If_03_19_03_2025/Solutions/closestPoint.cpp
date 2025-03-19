#include<iostream>
#include<cmath> /// математическа библиотека
using namespace std;
int main()
{
    int xA, yA, xB, yB, xC, yC;

//    cout<<pow(2, 3)<<endl; /// принтира 8

    cin>>xA>>yA>>xB>>yB>>xC>>yC;

    double AC = sqrt(pow(yC, 2)+ (xA-xC)*(xA-xC));
    double AB = sqrt(yB*yB + pow(abs(xA - xB), 2));

    /// sqrt(num) -> корен квадратен от num
    /// pow(num, power) -> num на степен power
    /// abs(num) -> модул на num

    if(AC < AB)
    {
        cout<<"C is closer"<<endl;
    }
    else if(AC > AB)
    {
        cout<<"B is closer"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
    return 0;
}
