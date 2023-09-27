#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,q;
	cin >> n >> q;
	vector<string> names(n);
	vector<int> times(n);

	queue<int> que;
	for(int i=0;i<n;i++){
		cin >> names[i] >> times[i];
		que.push(i);
	}

	int t = 0;
	while(!que.empty()){
		int id = que.front();que.pop();
		t += min(times[id],q);
		times[id] = max(0,times[id] - q);

		if(times[id] == 0)
			cout << names[id] << " " << t << endl;
		else
			que.push(id);
	}

	return 0;
}