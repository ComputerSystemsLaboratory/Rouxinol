#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#define LL long long
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define Inf 1000000000000000000LL
#define F first
#define S second
using namespace std;
typedef pair<int,int>pii;
const int maxn=200010;
int n,k;
int a[maxn];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=k+1;i<=n;i++){
		if(a[i-k]<a[i])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
