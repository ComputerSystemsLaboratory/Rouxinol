#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<utility>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
using namespace std;

const double eps = 1e-8;
const double INF = 1e12;

typedef pair<long,long> P;
typedef double Real;
typedef complex<Real> Point;
typedef vector<Point> G;

double cross(const Point& a,const Point& b){//calculate ad-bc(vector product)
	return imag(conj(a)*b);
}

struct L:public vector<Point>{//line data
	L(const Point &a,const Point &b){
		push_back(a);
		push_back(b);
	}
};

int n;
int dp[31];

long long func(int i){//i??????????§???????n??????????????????????????°???????????¢??°
	long long res;
	if(dp[i]!=-1)return dp[i];
	if(i==n)return 1;
	else if(i==n-1)res=func(i+1);
	else if(i==n-2)res=func(i+1)+func(i+2);
	else res=func(i+1)+func(i+2)+func(i+3);
	return dp[i]=res;
}

int main(){
	while(cin>>n){
		if(!n)break;
		memset(dp,-1,sizeof(dp));
		unsigned long long sum=func(0);
		bool check=false;
		if(sum%10)check=true;
		sum/=10;
		if(check)sum++;
		long long ans=sum/365;
		if(sum%365)ans++;
		cout<<ans<<endl;
	}
	return 0;
}