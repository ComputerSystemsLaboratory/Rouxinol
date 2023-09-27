#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int N, M;
int state[11][10001];

int func(int sembe[11][10001], int nct){
	int sum = 0;
	if(nct == N){
		for(int i = 0; i < M; i++){
			int lcnt = 0;
			int mcnt = 0;
			for(int j = 0; j < N; j++){
				if(sembe[j][i] == 1)lcnt++;
				if(sembe[j][i] == 0)mcnt++;
			}
			sum+=max(lcnt, mcnt);
		}
	}else{
		sum = max(sum, func(sembe, nct+1));
		rep(i, M){
			if(state[nct][i] == 0){
				sembe[nct][i] = 1;
			}else{
				sembe[nct][i] = 0;
			}
		}
		sum = max(sum, func(sembe, nct+1));
	}
	return sum;
}

int main(void){
	while(cin >> N >> M){
		if(N == M && N == 0)break;
		fill_n(*state, 11*10001, 0);
		rep(i, N){
			rep(j, M){
				cin >> state[i][j];
			}
		}
		cout << func(state, 0) << endl;
	}


	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}