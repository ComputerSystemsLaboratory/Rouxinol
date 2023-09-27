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
typedef pair<string, int> Ps;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n, cost;
	cin >> n >> cost;
	queue<Ps> que;
	rep(i, n){
		string s;
		int ms;
		cin >> s >> ms;
		que.push(Ps(s, ms));
	}
	int now_time = 0;
	while(!que.empty()){
		Ps p = que.front();que.pop();
		p.second -= cost;
		if(p.second <= 0){
			cout << p.first << " " << now_time + cost + p.second << endl;
			now_time += p.second;
		}else{
			que.push(p);
		}
		now_time += cost;
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