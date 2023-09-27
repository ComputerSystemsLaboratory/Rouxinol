#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <string>
#include <vector>
#include <limits.h>
#include <stack>
#include <queue>
#define maxn 1e9
#define pi acos(-1)
using namespace std;
double aabs(double x)
{
	if(x<0)return -x;
	return x;
}
int gcd(int a,int b)
{
	if(a%b==0)return b;
	return gcd(b,a%b);
}
struct card{char suit,value;};
void bubble(struct card A[],int N)///冒泡排序；
{
	for(int i=0;i<N;i++)
		for(int j=N-1;j>=i+1;j--)
			if(A[j].value<A[j-1].value)
			{
				card t=A[j];
				A[j]=A[j-1];
				A[j-1]=t;
			}
}
void selection(struct card A[],int N)///选择排序；
{
	for(int i=0;i<N;i++)
	{
		int minj=i;
		for(int j=i;j<N;j++)
		{
			if(A[j].value<A[minj].value)minj=j;
		}
		card t=A[i];
		A[i]=A[minj];
		A[minj]=t;
	}
}
void print(struct card A[],int N)
{
	for(int i=0;i<N;i++)
	{
		if(i>0)cout<<" ";
		cout<<A[i].suit<<A[i].value;
	}
	cout<<endl;
}
bool isStable(struct card c1[],struct card c2[],int N)
{
	for(int i=0;i<N;i++)
	{
		if(c1[i].suit!=c2[i].suit)return false;
	}
	return true;
}
int main()
{
	card c1[107],c2[107];
	int n;
	char ch;
	cin>>n;
	for(int i=0;i<n;i++)cin>>c1[i].suit>>c1[i].value;
	for(int i=0;i<n;i++)c2[i]=c1[i];
	bubble(c1, n);
	selection(c2, n);
	print(c1,n);
	cout<<"Stable"<<endl;
	print(c2, n);
	if(isStable(c1, c2, n))cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
	return 0;
}

