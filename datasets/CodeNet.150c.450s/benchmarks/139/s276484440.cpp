#include<bits/stdc++.h>
using namespace std;

long long N, M;
vector<long long> tree[100005];
long long ans[100005];

int main(){
	cin >> N >> M;

	for(long long i = 0; i < M; i++) {
		long long A, B;
		cin >> A >> B;
		A--;B--;
		tree[B].push_back(A);
		tree[A].push_back(B);
	}

	for(long long i = 0; i < N; i++){
		ans[i] = -1;
	}

	// (cost, (point, parent))
	priority_queue<pair<long long, pair<long long, long long> >, vector<pair<long long, pair<long long, long long> > >, greater<pair<long long, pair<long long, long long> > > > queue;

	queue.push(make_pair(0, make_pair(0, -1)));

	while(!queue.empty()) {
		long long cost = queue.top().first;
		long long point = queue.top().second.first;
		long long parent = queue.top().second.second;
		queue.pop();

		//cout << "cost = " << cost << " point = " << point << " parent = " << parent << endl;

		if(ans[point] != -1) {
			continue;
		}
		if(parent != -1){
			ans[point] = parent;
		}

		for(long long i = 0; i < tree[point].size(); i++){
			long long next_point = tree[point][i];
			//cout << " next " << next_point << endl;
			if(ans[next_point] == -1) {
				queue.push(make_pair(cost + 1, make_pair(next_point, point)));
			}
		}
	}


	for(long long i = 1; i < N; i++) {
		if(ans[i] == -1) {
			cout << "No" << endl;
			return 0;
		}
	}


	cout << "Yes" << endl;
	for(long long i = 1; i < N; i++) {
		cout << ans[i] + 1 << endl;
	}
}
