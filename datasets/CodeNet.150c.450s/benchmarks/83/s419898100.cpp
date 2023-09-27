/*
Powered by 0736TuT
Code + Music + Games = Life
*/

#include<iostream>
#include<cstdio>
#define MAXN 110

typedef long long qwq;

using namespace std;

int scan(int *buf_tar)
{
    char buf_c=0; bool is_rev=0;
    while(buf_c!='-'&&(buf_c<'0'||buf_c>'9')) {buf_c=getchar(); if(buf_c==EOF) return EOF;}
    if(buf_c=='-') is_rev=1,buf_c=getchar();
    *buf_tar=0;
    while(buf_c>='0'&&buf_c<='9') {*buf_tar*=10; *buf_tar+=buf_c-'0'; buf_c=getchar();}
    if(is_rev) *buf_tar=-*buf_tar;
    return 0;
}

int n,Max;
int v[MAXN],w[MAXN];
int f[10010];

int main()
{
    scan(&n); scan(&Max);
    for(int i=1;i<=n;i++) {scan(&v[i]); scan(&w[i]);}
    for(int i=1;i<=n;i++) for(int j=Max;j>=w[i];j--) if(f[j]<f[j-w[i]]+v[i]) f[j]=f[j-w[i]]+v[i];
    printf("%d\n",f[Max]);
    return 0;
}