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

//??????

int main(void){
	int ans1[1000],ans2[1000],cnt=0;
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0)break;
		int a[100],b[100],dif=0;
		rep(i,n){
			cin>>a[i];
			dif+=a[i];
		}
		rep(i,m){
			cin>>b[i];
			dif-=b[i];
		}
		int first=-1,second=-1,sum=999999;
		rep(i,n){
			rep(j,m){
				if(2*(a[i]-b[j])==dif && sum>a[i]+b[j]){
					first=a[i];
					second=b[j];
					sum=a[i]+b[j];
				}
			}
		}
		ans1[cnt]=first;
		ans2[cnt]=second;
		cnt++;
	}
	rep(i,cnt){
		if(ans1[i]==-1){
			cout<<-1<<endl;
		}else{
			cout<<ans1[i]<<" "<<ans2[i]<<endl;
		}
	}
	return 0;
}