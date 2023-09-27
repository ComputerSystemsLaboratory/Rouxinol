#include<functional>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<utility>
#include<string>
#include<cstdio>
#include<vector>
#include<bitset>
#include<cmath>
#include<ctime>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
using namespace std;
const int inf=2147483647,dx[]={-1,0,1,0},dy[]={0,-1,0,1};// 上 左 下 右
const int N=100005,M=1000005,K=200005,mod=1000000007;
const long long llinf=9223372036854775807ll;
//int & long lon
long long n,a[N],q,b,c;
map<long long,long long> mp;
long long ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],mp[a[i]]++,ans+=a[i];
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>b>>c;
		ans+=(c-b)*mp[b];
		mp[c]+=mp[b];
		mp[b]=0;
		cout<<ans<<'\n';
	}
	return 0;
}