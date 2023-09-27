#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <functional>
#include <set>
#include <numeric>
#include <queue>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
#define PI 3.14159265358979323846264338327950

vector<int> to[100005];

int main() {
	ll N, M, ans=0;
	int a, b;

	cin >> N >> M;
	rep(i, M){
		cin >> a >> b;
		--a; --b;
		to[a].push_back(b);
		to[b].push_back(a);
	}
	queue<int> q;
	vector<int> dist(N,-1);
	vector<int> pre(N, -1);
	dist[0] = 0; 
	q.push(0);
	while (!q.empty()){
		int x = q.front();
		q.pop();
		for (int i : to[x]){
			if (dist[i] != -1)continue;
			dist[i] = dist[x] + 1;
			pre[i] = x;
			q.push(i); 
		}
	}

	cout << "Yes" << endl;
	rep(i, N){
		if (i == 0)continue;
		ans = pre[i];
		++ans;
		cout << ans << endl;
	}

	return 0;
}