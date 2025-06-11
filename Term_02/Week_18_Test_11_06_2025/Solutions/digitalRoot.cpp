#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int d1 = N % 10, d2 = N / 10;
    int sum = d1 + d2;
    for( ; sum >= 10 ; )
    {
        sum = sum / 10 + sum % 10;
    }
    cout<<sum;
}

