#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#ifdef __BORLANDC__
	typedef __int64 ll;
#else
	typedef long long ll;
#endif


int main(){
	
	ll k = 1;
	int n;
	cin>>n;
	reps(i,1,n+1){
		k*=i;
	}
	cout<<k<<endl;
}