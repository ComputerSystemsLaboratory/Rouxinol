#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;


int main(void){
	int ans[1000],cnt=0;
	while(1){
		int n,r;
		cin>>n>>r;
		if(n==0)break;
		int p[50],c[50];
		irep(i,r)cin>>p[i]>>c[i];//?????????????????????
		int pos=0;
		rep(i,r){
			if(pos<c[i]){
				pos+=p[i]-1;
			}else if(pos<c[i]+p[i]-1){
				pos-=c[i];
			}
		}
		ans[cnt]=n-pos;
		cnt++;
	}
	rep(i,cnt)cout<<ans[i]<<endl;
	return 0;
}