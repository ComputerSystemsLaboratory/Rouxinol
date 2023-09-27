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
#define UPC(a) (a>='A' && a<='B')
#define LWC(a) (a>='a' && a<='b')

inline void scd(int &a){scanf("%d",&a);}
inline void scdd(int &a,int &b){scanf("%d %d",&a,&b);}
inline void sctd(int &a,int &b,int &c){scanf("%d %d %d",&a,&b,&c);}
inline void sctd(LL &a,LL &b,LL &c){scanf("%I64d %I64d %I64d",&a,&b,&c);}
inline void scdlld(LL &a,LL &b){scanf("%I64d %I64d",&a,&b);}
inline void sclld(LL &a){scanf("%I64d",&a);}

inline void prd(int a){printf("%d",a);};
inline void prdd(int a,int b){printf("%d %d",a,b);};
inline void prtd(int a, int b, int c){printf("%d %d %d",a,b,c);};
inline void prtlld(LL a, LL b, LL c){printf("%I64d %I64d %I64d",a,b,c);};
inline void prdlld(LL a, LL b){printf("%I64d %I64d",a,b);};
inline void prtlld(LL a){printf("%I64d",a);};

#define scarrd(a,b) for(int index=0 ; index<b ; index++)scanf("%d",&a[index])
#define prarr(a,b) for(int i=0 ; i<b ; i++)printf("%d ",a[i])
#define iniarr(a,b) for(int i=0 ; i<b ;i++)a[i]=0
#define arr(a,b) int *a=(int *)malloc(b*sizeof(int))
#define llarr(a,b) long long int *a=(long long int *)malloc(b*sizeof(long long int))
#define st(a,b) char *a=(char *)malloc(b*sizeof(char))
#define grav 9.8
#define pi 3.14159265

int d=0;

void merge(int *a, int left,int mid, int right)
{
	int mile=mid-left;
	int rimi=right-mid;
	int l[mile+1],r[rimi+1];
	for(int i=0 ; i<mile ; i++)
	{
		l[i]=a[left+i];
	}
	for(int i=0 ; i<rimi ; i++)
	{
		r[i]=a[mid+i];
	}
	l[mile]=dmax;
	r[rimi]=dmax;
	
	int x=0,y=0;
	for(int i=left ; i<right ; i++)
	{
		if(l[x]<=r[y])
		{
			d++;
			a[i]=l[x];
			x++;
		}
		else
		{
			d++;
			a[i]=r[y];
			y++;
		}
	}
}

void mergeSort(int *a,int left,int right)
{
	//debugdd(left,right);
	if((left+1)<right)
	{
		//debug;
		int mid=(left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
	
}

int main()
{
	int n;
	scd(n);
	int a[n+1];
	forin(i,0,n)
	scd(a[i]);
	
	mergeSort(a,0,n);
	forin(i,0,n-1)
	printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
	printf("%d\n",d);
	
	return 0;
}