#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;

int a[100000];
int l[100000];
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	l[0]=a[0];
	int length=1;	
	for(int i=1;i<n;i++){
		if(l[length-1]<a[i])
			l[length++]=a[i];
		else
			*lower_bound(l,l+length,a[i])=a[i];
	}
	cout<<length<<endl;
	return 0;
}


