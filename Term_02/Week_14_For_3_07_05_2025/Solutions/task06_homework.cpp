#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    /*
    double suma = 0.0;

//    1/2 + 2/3 + 3/4 ...

    for(double i = 1; i < N; i++)
    {
        suma = (i / (i + 1)) + suma;
    }
    cout<<suma<<endl;*/

    int suma = 0;
    for(int i = 1; i < N * 2; i += 2)
    {
        suma = suma + i * (i + 1);
    }

    cout<<suma;

    return 0;
}
