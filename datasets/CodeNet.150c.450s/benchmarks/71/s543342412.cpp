#include<iostream>

using namespace std;
int N;

int main()
{
    while(cin >> N)
    {
    int Sum = 0;
    for(int a=0; a<=9; a++)
    {
        for(int b=0; b<=9; b++)
        {
            for(int c=0; c<=9; c++)
            {
                for(int d=0; d<=9; d++)
                {
                    if(a+b+c+d == N)
                    {
                        Sum++;
                    }
                }
            }
        }
    }
        cout << Sum << endl;
    }

}