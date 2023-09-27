#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
#include<list>
#include <cstdlib>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 8;
#define MOD 1046527
int n;
char H[maxn][15];

int getChar(char ch)
{
    return ch-'A' + 1;
}
int getValue(char s[])
{
    int sum = 0;
    int p = 1;
    int len = strlen(s);
    for(int i = 0;i < len; ++i){
        sum += p * getChar(s[i]);
        p *= 6;
    }
    return sum;
}
int h1(int k)
{
    return k % MOD;
}
int h2(int k)
{
    return 1 + k % (MOD-1);
}

int is_insert(char s[])
{
    int key = getValue(s);
    int i = 0;
    while(true)
    {
        int h = (h1(key) + i * h2(key)) % MOD;
        if(strcmp(H[h],s) == 0) return 1;
        else if(strlen(H[h]) == 0){
            strcpy(H[h],s);
            return 0;
        }
        i++;
    }
}
int is_find(char s[])
{
    int key = getValue(s);
    int i = 0;
    while(true)
    {
        int h = (h1(key) + i * h2(key)) % MOD;
        if(strcmp(H[h],s) == 0) return 1;
        else if(strlen(H[h]) == 0){
            return 0;
        }
        i++;
    }
}
int main()
{
    char a[15],b[15];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%s%s",a,b);
        if(a[0] == 'i'){
            is_insert(b);
        }else{
            if(is_find(b)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
    return 0;
}