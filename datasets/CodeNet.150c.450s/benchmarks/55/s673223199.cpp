#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[1001];
    while(1) {
        scanf("%s", str);
        if(str[0]=='0') break;
        int sum = 0;
        for (int i = 0; i < strlen(str); ++i)
        {
            sum += (str[i]-'0');
        }

        printf("%d\n", sum);
    }
    return 0;
}