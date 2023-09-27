#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;
 
int n,q;
int k=0;
int a[20];
int m[200];

bool dfs(int i,int s)
{
	if(i==n) return s==k;
	if(dfs(i+1,s))return true;
	if(dfs(i+1,s+a[i]))return true;
   return false;
}
 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}

	cin>>q;
	for(int i=0;i<q;i++){
	cin>>m[i];
	}

	for(int i=0;i<q;i++){
		k=m[i];
	if(dfs(0,0)==true)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	}
	
	
    return 0;
}