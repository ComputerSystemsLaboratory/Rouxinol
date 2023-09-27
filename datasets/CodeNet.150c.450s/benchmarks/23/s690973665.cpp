/*
    ????????°??§???????????¨????????????
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
#include <map>
#include <utility>
#define LLU unsigned long long int
#define LL long long int
#define LD long double
using namespace std;
#define Lfmax DBL_MAX
#define LLUmax ULLONG_MAX
#define LLmax LLONG_MAX
#define dmax INT_MAX
#define vd vector<int>
#define vLL vector<long long int>
#define vLLU vector<unsigned long long int> 
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define debug printf("asd\n")
#define debugd(a) printf("--%d\n",a)
#define debugdd(a,b) printf("--%d %d\n",a,b)
#define debugarr(a,b) for(int i=0 ; i<b ; i++)printf("%d ",a[i]);printf("\n")
#define newline printf("\n")
#define forin(a,b,c) for(int a=b ; a<c ; a++)
#define forde(a,b,c) for(int a=b ; a>=c ; a--)


inline void scd(int &a){scanf("%d",&a);}
inline void scdd(int &a,int &b){scanf("%d %d",&a,&b);}
inline void sctd(int &a,int &b,int &c){scanf("%d %d %d",&a,&b,&c);}
inline void scdlld(LL &a,LL &b){scanf("%I64d %I64d",&a,&b);}
inline void sclld(LL &a){scanf("%I64d",&a);}

#define scarrd(a,b) for(int index=0 ; index<b ; index++)scanf("%d",&a[index])
#define prdlld(a,b) printf("%I64d %I64d",a,b)
#define prdd(a,b) printf("%d %d",a,b)
#define prd(a) printf("%d",a)
#define prarr(a,b) for(int i=0 ; i<b ; i++)printf("%d ",a[i])
#define iniarr(a,b) for(int i=0 ; i<b ;i++)a[i]=0
#define arr(a,b) int *a=(int *)malloc(b*sizeof(int))
#define llarr(a,b) long long int *a=(long long int *)malloc(b*sizeof(long long int))
#define st(a,b) char *a=(char *)malloc(b*sizeof(char))
#define grav 9.8
#define pi 3.14159265

int fbc[200000];

int fb(int a)
{
	if(fbc[a]>0)
	return fbc[a];
	
	
	if(a<2)
	return 1;
	
	fbc[a]=fb(a-1)+fb(a-2);
	return fbc[a];
	
}

int main()
{
	iniarr(fbc,200000);
	int a;
	scd(a);
	a=fb(a);
	printf("%d\n",a);	
	return 0;
}