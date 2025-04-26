#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//    for(int i = 10; i < 100; i++)
//    {
//        cout<<i<<" ";
//    }

//    for(int i = 50; i > 29; i--)
//    {
//        cout<<i<<endl;
//    }

//    for(int i = 100; i <= 300; i += 7)
//    {
//        cout<<i<<"  ";
//    }

//    for(int i = 1; i <= 100; i++)
//    {
//        if(i % 3 == 0)
//            cout<<i<<" ";
//    }
//    cout<<endl;
//
//    for(int i = 0; i <= 100; i += 3)
//    {
//        cout<<i<<" ";
//    }

//Да се напише програма, която въвежда две
//числа a и b (a < b) и отпечатва на екрана
//всички кратни на 10, които са между a и b.

//    int a, b;
//    cin>>a>>b;
//    for(int i = a; i < b; i++)
//    {
//        if(i % 10 == 0)
//            cout<<i<<" ";
//    }

//Да се напише програма, която отпечатва на
//екрана всички трицифрени, които имат
//сбор от цифрите равен на 19. Числата да се
//извеждат на един ред, разделени с по 2
//интервала. След това на нов ред да се
//изведе общия брой на търсените числа

//    int a, b, c, sum = 0, br = 0;
//    for(int i = 100; i < 1000; i++)
//    {
//        a = i / 100;
//        b = i / 10 % 10;
//        c = i % 10;
//        sum = a + b + c;
//        if(sum == 19)
//        {
//            cout<<i<<" ";
//            br++;
//        }
//    }
//    cout<<endl<<br;


//    int N, br = 0;
//    cin>>N;
//    if(N <= 1)
//    {
//        cout<<"Vavedi novo chislo!";
//        return -1;
//    }
    int br = 0;
    for(int i = 2; i < 100; i++)
    {
        for(int delitel = 2; delitel < sqrt(N); delitel++)
        {
            if(N % delitel == 0)
            {
                br++;
            }
        }
        if(br == 0)
        {
            cout<<N<<endl;
        }
        br = 0;
    }




//    for(int i = 0, j = 10; i < 10 && j > 0; i++, j--)
//    {
//        cout<<i<<" "<<j<<endl;
//    }


    return 0;
}
