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
    return ch -'A' + 1;
}
ll getValue(char t[])
{
    int len = strlen(t);
    ll sum = 0, p = 1, i;
    for(i = 0; i < len;  ++i){
        sum += p * getChar(t[i]);
        p *= 5;
    }
    return sum;
}
ll h1(ll k)
{
    return k % MOD;
}
ll h2(ll k)
{
    return 1 + (k % (MOD - 1));
}
int solve_insert(char c[])
{
    ll key,i,h;
    key = getValue(c);
    i = 0;
    while(true)
    {
        h = (h1(key) + i * h2(key)) % MOD;
        if(strcmp(H[h],c) == 0) return 1;
        else if(strlen(H[h]) == 0){
            strcpy(H[h],c);
            return 0;
        }
        i++;
    }
}
int solve_find(char c[])
{
    ll key, i, h;
    i = 0;
    key = getValue(c);
    while(true)
    {
        h = (h1(key) + i * h2(key)) % MOD;
        if(strcmp(H[h],c) == 0) return 1;
        else if(strlen(H[h]) == 0){
            return 0;
        }
        i++;
    }
}
int main()
{
    scanf("%d",&n);
    char s[15],t[15];
    for(int i = 0; i < n; ++i){
        scanf("%s%s",s,t);
        if(s[0] == 'i'){
            solve_insert(t);
        }else{
            if(solve_find(t))printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}