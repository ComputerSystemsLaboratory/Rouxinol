#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<ctype.h>
#include<stack>
#include<math.h>
#include <string>
#include<algorithm>
#include<iomanip>
#define _for(i,a,b) for(int i = (a);i < (b);i++)
#define mset(x) memset(x,0,sizeof(x));
using namespace std;
int bubblesort(int A[],int N)
{
	int sw = 0;
	bool flag = 1;
	for(int i = 0;flag ;i++)
	{
		flag = 0;
		for(int j = N - 1; j >= i + 1;j--)
		{
			if(A[j] <A[j - 1])
			{
				swap(A[j],A[j - 1]);
				flag = 1;
				sw++;
			}
		}
	}
	return sw;
}

int main() {
	int A[100],N,sw;
	cin>>N;
	for(int i = 0; i < N;i++)
	{
		cin>>A[i];
	 } 
	 sw = bubblesort(A,N);
	 for(int i = 0;i < N;i++)
	 {
	 	if(i) cout<<" ";
	 	cout<<A[i];
	 }
	 cout<<endl;
	 cout<<sw<<endl;
	return 0;
}
