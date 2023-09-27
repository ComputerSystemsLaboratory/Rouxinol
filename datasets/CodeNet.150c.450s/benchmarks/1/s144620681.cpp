/*
Powered by 0736TuT
Code + Music + Games = Life
*/

#include<iostream>
#include<cstdio>
#define MAXN 100010

typedef long long qwq;

using namespace std;

qwq scan(qwq *buf_tar)
{
    char buf_c=0; bool is_rev=0;
    while(buf_c!='-'&&(buf_c<'0'||buf_c>'9')) {buf_c=getchar(); if(buf_c==EOF) return EOF;}
    if(buf_c=='-') is_rev=1,buf_c=getchar();
    *buf_tar=0;
    while(buf_c>='0'&&buf_c<='9') {*buf_tar*=10; *buf_tar+=buf_c-'0'; buf_c=getchar();}
    if(is_rev) *buf_tar=-*buf_tar;
    return 0;
}

qwq n;
qwq num[MAXN];
qwq f[MAXN],mi[MAXN];

inline qwq bsearch(const qwq,const qwq,const qwq);

int main()
{
    qwq temp;
    scan(&n);
    for(qwq i=1;i<=n;i++) {scan(&num[i]); mi[i]=0x7fffffff;}
    f[1]=1; mi[1]=num[1];
    for(qwq i=2;i<=n;i++)
    {
	temp=bsearch(1,i-1,num[i]);
	mi[temp+1]=num[i];
	f[i]=temp+1;
    }
    for(qwq i=1;i<=n+1;i++) f[i]=max(f[i],f[i-1]);
    printf("%lld\n",f[n]);
    return 0;
}

inline qwq bsearch(const qwq l,const qwq r,const qwq s)
{
    if(l==r)
    {
	if(mi[l]<s) return l;
	return l-1;
    }
    qwq mid=(l+r)>>1;
    if(mi[mid]<s&&mi[mid+1]>s) return mid;
    if(mi[mid]>=s) return bsearch(l,mid,s);
    return bsearch(mid+1,r,s);
}