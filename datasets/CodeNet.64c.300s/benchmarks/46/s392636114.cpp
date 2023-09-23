#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

int const size = 1000000;
int const N = size;

bool* hurui(int an)
{
        const int MAX_SIZE = sqrt(size);
        static bool vec[size];

        //初期化
        for(int i=0;i <= size; i+=2)
        {
                vec[i] = false;
        }
        for(int i=1;i <= size; i+=2)
        {
                vec[i] = true;
        }

        vec[1] = false;
        vec[2] = true;

        for(int i=3;i < MAX_SIZE;i+=2)
        {
                if(vec[i]){
                        for(int j=2; i*j < size ; j++)
                        {
                                vec[i*j] = false;
                        }
                }
        }

        return vec;
}

int main()
{
        bool* vec = hurui(1);
        int l,m,n;
        while(cin >> l >> m >> n){
                if(l==0 && m == 0 && n == 0)
                        break;
                int count = 0;
                for(int i = 0; i < size; i++)
                {
                        if(vec[l+i*m]){
                                count++;
                        }

                        if(count == n){
                                cout << (l + m*i) << endl;
                                break;
                        }
                }
        }

        return 0;
}