#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int store[100000+2],u;
void partition(int n)
{
	int x,i,j,mid;
	x=store[n-1];
	i=0;
	for(j=0;j<n-1;j++)
	{
		if(store[j]<=x){
			mid=store[j];
			store[j]=store[i];
			store[i]=mid;
			i++;
		}
	}
	mid=store[i];
	store[i]=store[n-1];
	store[n-1]=mid;
	u=i;
}
int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>store[i];
	partition(n);
	for(int i=0;i<n;i++)
	{
		if(i==u)
			cout<<"["<<store[i]<<"]"<<" ";
		else if(i==n-1)
			cout<<store[i]<<endl;
		else
			cout<<store[i]<<" ";
	}
	return 0;
}
