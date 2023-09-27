#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<functional>
#include<set>
using namespace std;

#define INF 1<<21
#define DIV 1000000007
#define MAX 100005


int main(){
  int N;
  while (cin >> N,N) {
	int x[201],y[201];
	int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };
	x[0] = 0, y[0] = 0;
	int n, d;
	int maxx = 0, minx = 205, maxy = 0, miny = 205;

	for (int i = 1; i < N; i++) {
	  cin >> n >> d;
	  x[i] = x[n] + dx[d];
	  y[i] = y[n] + dy[d];
	}
	for (int i = 0; i < N; i++) {
	  maxx = max(maxx, x[i]);
	  maxy = max(maxy, y[i]);
	  minx = min(minx, x[i]);
	  miny = min(miny, y[i]);
	}

	cout << maxx - minx +1 << " " << maxy - miny  +1 << endl;
  }
}