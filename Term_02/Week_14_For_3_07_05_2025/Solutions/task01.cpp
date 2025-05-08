#include<iostream>
using namespace std;
int main(){
    int n, sum;
    sum = 1;
    for (int i = 1; i <= 5; i++){
        cin>>n;
        sum = n * sum;
    }
    cout<<sum;

    return 0;
}
