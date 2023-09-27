#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

const int N = 11, M = 11111;

int n,m;
int board[N][M];

bool Input(){
	cin>>n>>m;
	if(n==0 && m==0)return false;
	rep(i,n){
		rep(j,m)cin>>board[i][j];
	}
	return true;
}

bool has(int state, int i){
	return (state&(1<<i))>0;
}

int Rotate(int s){
	int ret = 0;
	
	rep(i,m){
		int cnt = 0;
		rep(j,n){
			cnt += board[j][i] ^ (has(s,j) ? 1 : 0);
		}
		
		ret += max(cnt, n-cnt);
	}
	
	return ret;
}

int Solve(){
	int ret = 0;
	rep(i,(1<<n)){
		ret = max(ret, Rotate(i));
	}
	return ret;
}

int main(){
	while(Input())cout<<Solve()<<endl;
}