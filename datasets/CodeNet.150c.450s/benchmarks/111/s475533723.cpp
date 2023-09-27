#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

class MyLong{
public:
	int n[10];
	MyLong operator+=(MyLong myLong){
		int i;
		for(i=0;i<9;i++){
			this->n[i]+=myLong.n[i];
			if(this->n[i]>=1000000){
				this->n[i+1]++;
				this->n[i]-=1000000;
			}
		}
		return *this;
	}
};

MyLong dp[110][30];
int x[110];

int main() {
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)cin>>x[i];
	int j;
	dp[0][x[0]].n[0]=1;
	for(i=1;i<n-1;i++){
		for(j=0;j<=20;j++){
			if(j-x[i]>=0)dp[i][j]+=dp[i-1][j-x[i]];
			if(j+x[i]<=20)dp[i][j]+=dp[i-1][j+x[i]];
//cout<<i<<" "<<j<<" "<<dp[i][j].n[0]<<endl;
		}
	}
	int go=0;
	for(i=9;i>=0;i--){
		if(dp[n-2][x[n-1]].n[i]>0){
			go++;
		}
		if(go==1){
			cout<<dp[n-2][x[n-1]].n[i];
			go++;
		}else if(go>1){
			printf("%06d",dp[n-2][x[n-1]].n[i]);
		}
	}
	cout<<endl;
	return 0;
}