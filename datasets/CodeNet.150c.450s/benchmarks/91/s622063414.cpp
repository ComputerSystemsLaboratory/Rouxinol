#include <stdio.h>
#include<iostream>

using namespace std;

long long int n,i;
int a[1000001] = {0};
int ans;

int main()
{
    for(int i = 2; i < 1000000; i++)
    {
        if(a[i] == 0)
        {
            for(int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    while(cin >> n)
    {
        for(int i = 2; i <= n; i++)
        {
            if(a[i] == 0)ans++;
        }

        /*for(int i = 2; i <= n; i++)
        {
            if(i == 2 || i == 3 ||  i == 5 || i == 7)ans++;

        }*/
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}