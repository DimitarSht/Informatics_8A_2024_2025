#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"Enter an operation:"<<endl;
//    cout<<"1 for +\n2 for -\n3 for *\n";
    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    case 'v':
        cout<<"Koe chislo iskash da korenuvash? ";
        char choice;
        cin>>choice;
        switch(choice)
        {
        case 'a':
            cout<<sqrt(a)<<endl;
            break;
        case 'b':
            cout<<sqrt(b)<<endl;
            break;
        default:
            cout<<"Vavedi nov izbor!"<<endl;
            break;
        }
        break;
    case '^':
        cout<<pow(a, b)<<endl;
        break;
    default:
        cout<<"Wrong operation"<<endl;
        break;
    }

//    if(op == '+')
//    {
//        cout<<a+b<<endl;
//    }
//    else if(op == '-')
//    {
//        cout<<a-b<<endl;
//    }
//    else if(op == '*')
//    {
//        cout<<a*b<<endl;
//    }
//    else
//        cout<<"Wrong operation";


    return 0;
}

