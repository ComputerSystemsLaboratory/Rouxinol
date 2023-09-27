#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

const int BUCKET = 400,SIZE = 300;
int N,Q;
int bucketSum [BUCKET];
int A [100000];

void add(int idx,int val)
{
	A [idx] += val;
	bucketSum [idx / SIZE] += val;
}

int getSum(int l,int r)
{
	int res = 0;
	FOR(i,0,BUCKET){
		int bucket_l = i * SIZE,bucket_r = (i + 1) * SIZE;
		if(bucket_r <= l || r <= bucket_l) continue;
		if(l <= bucket_l && bucket_r <= r){
			res += bucketSum [i];
			continue;
		}
		FOR(j,bucket_l,bucket_r){
			if(l <= j && j < r){
				res += A [j];
			}
		}
	}
	return res;
}

int main()
{
	scanf("%d%d",&N,&Q);
	vector<int> ans;
	FOR(i,0,Q){
		int com,x,y;
		scanf("%d%d%d",&com,&x,&y);
		if(com == 0){
			add(x - 1,y);
		}
		else{
			ans.push_back(getSum(x - 1,y));
		}
	}

	FOR(i,0,ans.size()){
		printf("%d\n",ans [i]);
	}

	return 0;
}