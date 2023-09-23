#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int f,s;
    int sum,cnt;
    while (cin >> f >> s)
    {
        sum = f+s;
        cnt = 0;
        while (sum)
            sum /= 10 , cnt ++;
        printf("%d\n",cnt);
    }
}