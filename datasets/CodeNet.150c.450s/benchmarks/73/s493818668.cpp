#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
#define pq priority_queue
#define P pair<int,int>
#define P2 pair<int,P>
#define P3 pair<int,P2>
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7, around[]={0,1,1,-1,-1,0,-1,1,0,0};
const int vx[]={1,0,-1,0}, vy[]={0,1,0,-1};
const ll LINF=1e18;
const ld PI=abs(acos(-1));
const int sqrtN = 512;

struct SqrtDecomposition{
	vector<int> data;
	vector<int> bucketSum;
	int N, K;
	
	SqrtDecomposition(int n) : N(n){
		K = (N + sqrtN - 1) / sqrtN;
		data.assign(K * sqrtN, 0);
		bucketSum.assign(K, 0);
	}
	
	void add(int k, int x){
		data[k] += x;
		k = k / sqrtN;
		
		int sum = 0;
		for(int i = k * sqrtN; i < (k + 1) * sqrtN; i++){
			sum += data[i];
		}
		
		bucketSum[k] = sum;
	}
	
	int get(int a, int b){
		int sum = 0;
		for(int k = 0; k < K; k++){
			int l = k * sqrtN, r = (k + 1) * sqrtN;
			
			if(b<=l||r<=a) continue;
			if(a<=l&&r<=b) sum += bucketSum[k];
			else{
				for(int i = max(a, l); i < min(b, r); i++){
					sum += data[i];
				}
			}
		}
		
		return sum;
	}
};

int main(){
	int n,q; cin >> n >> q;
	SqrtDecomposition data(n);
	REP(i,0,q){
		int a,b,c; cin >> a >> b >> c;
		
		if(a == 0) data.add(b, c);
		else if(a == 1) cout << data.get(b, c + 1) << endl;
	}

	return 0;
}

