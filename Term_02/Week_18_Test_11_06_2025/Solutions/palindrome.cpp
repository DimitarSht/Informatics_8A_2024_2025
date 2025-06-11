#include<iostream>
using namespace std;
int main(){
    int n1, revN, tmp;
    revN = 0;
    cin>>n1;
    tmp = n1;
    int counter;
    for (counter = 0;n1 != 0 ; counter++){
        n1 /= 10;
    }
    n1 = tmp;
    for (int i = 1; i <= counter; i++){
        revN = revN*10 + (tmp%10);
        tmp /= 10;
    }
    if (n1 == revN){
        cout<<"Simetrichni sa!!";
    }
    else{
        cout<<"Ne sa simetrichni!!";
    }
}
