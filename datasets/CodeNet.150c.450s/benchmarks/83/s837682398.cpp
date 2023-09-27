#include <iostream>
#include <iomanip>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <string>		//string, .end(), .first() .size()
#include <algorithm>		//max(a,b) min(a,b) swap(a,b) sort(f,t) reverse(f,t) count(f,t,x) fill(f,t,x) sort(f,t greater<int>())
#include <queue>			//front(),priority_queue<int,vector<int>,greater<int>>
#include <stack>			//top()
#include <set> 			//.insert()
 
#define N_MAX 	100
#define W_MAX	10000

using namespace std;

int V[N_MAX+10][W_MAX+10];
pair<int , int>	Data[N_MAX+10];

int func(int i, int c){
	if(i <= 0 || c <= 0) return 0;
	return V[i][c];
}

void DispAns(int x,int y){
	for (int i = 0; i < x; ++i){
		for (int j = 0; j < y; ++j){
			cout << V[i][j] << " "; 
		}
		cout << endl;
	}
}

void solve(){
	int N,W;
	cin >> N >> W;
	for(int i = 1; i<=N; ++i) cin >> Data[i].first >> Data[i].second;
	for (int i = 0; i <= N; ++i){
		for (int j = 0; j <= W; ++j){
			if(j >= Data[i].second) V[i][j] = max(Data[i].first + func(i-1,j-Data[i].second),func(i-1,j));
			else V[i][j] = func(i-1,j);
		}
	}
	cout << V[N][W] << endl;
	// DispAns(N+1,W+1);
}

int main(){
	solve();
	return 0;
}