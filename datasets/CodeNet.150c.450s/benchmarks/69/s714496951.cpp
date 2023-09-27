// g++ -std=c++11 temp.cpp
#include <bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define Rep(i,n) For(i,0,n)
#define Each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

int N;
vector<int> in, h1, h2;

/*
bool sorter(const A& x, const A& y){
	return x.a < y.a;
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int lcm(int a, int b){
	if(a == 0 || b == 0) return 0;
	return a*b/gcd(a,b);
}
*/
bool dfs(int n){
	bool flag = false;
	if(n == 10) return true;
	else{
		if(h1.size() == 0 || h1[h1.size()-1] < in[n]){
			h1.pb(in[n]);
			if(dfs(n+1)) flag = true;
			h1.pop_back();
		}
		if(h2.size() == 0 || h2[h2.size()-1] < in[n]){
			h2.pb(in[n]);
			if(dfs(n+1)) flag = true;
			h2.pop_back();
		}
	}
	return flag;
}

int main(){
	scanf("%d", &N);
	Rep(i,N){
		in.clear();
		Rep(j,10){
			int ball;	
			scanf("%d", &ball);
			in.pb(ball);
		}
		h1.clear();
		h2.clear();
		if(dfs(0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}