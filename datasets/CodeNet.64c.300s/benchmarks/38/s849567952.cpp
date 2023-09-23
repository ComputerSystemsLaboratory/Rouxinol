#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
const int N = 20 + 5;

int T;

int main()
{
    scanf("%d", &T);
    while(T--)
    {
        int left = 0, right = 0, flag = 0;
        for(int i = 0; i < 10; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            if(tmp > left) left =tmp;
            else if(tmp > right) right = tmp;
            else flag = 1;
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}