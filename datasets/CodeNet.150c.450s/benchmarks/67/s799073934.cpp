#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
	while(true){
	vi ans(5000,0);
	int num; cin >> num; if(!num) break;
	for(int k = 1; k <=num;k++){
		int sum = 0;
		for(int l = k; l<=num;l++){
			sum+=l;
			if(sum >1000) break;
			if(l != k) ans[sum]++;
	}
	}
	cout << ans[num] << endl;
	
}
}