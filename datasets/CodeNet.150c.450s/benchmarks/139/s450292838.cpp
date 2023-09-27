#include<bits/stdc++.h>
using namespace std;

long long N, M;
vector<long long> tree[100005];
// cur       , parent
map<long long, long long> memo;

int main(){
	cin >> N >> M;
	for(long long i = 0; i < M; i++) {
		long long a, b;
		cin >> a >> b;
		a--;b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	//           cur, parent
	queue<pair<long long, long long> >q;

	q.push(make_pair(0, -1));

	while(!q.empty()) {
		long long cur = q.front().first;
		long long parent = q.front().second;
		q.pop();

		if(memo.count(cur) > 0){
			continue;
		}
		memo[cur] = parent;

		for(long long i = 0; i < tree[cur].size(); i++) {
			long long next = tree[cur][i];
			if(memo.count(next) > 0){
				continue;
			}
			q.push(make_pair(next, cur));
		}
	}

	bool ng = false;
	for(long long i = 1; i < N; i++) {
		if(memo.count(i) == 0) {
			ng = true;
		}
	}

	if(ng) {
		cout << "No" << endl;

	} else {
		cout << "Yes" << endl;
	for(long long i = 1; i < N; i++) {
		cout << memo[i] + 1 << endl;
	}

	}



}
