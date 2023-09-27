#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

struct Node{
	int s;
	queue<int> Q;
};

int main(){
	int n;
	cin >> n;
	Node node[n + 1];
	for(int i = 1; i <= n; i++){
		int u, k, v;
		cin >> u >> k;
		node[u].s = -1;
		while(k--){
			cin >> v;
			node[u].Q.push(v);
		}
	}

	int p = 1, next, m;
	queue<int> move;
	node[p].s = 0;
	move.push(p);

	while(!move.empty()){
		p = move.front();
		//cout << "Pivot is " << p << endl;
		if(node[p].Q.empty()){
			//cout << "Nowhere to go from " << p << endl;
			move.pop();
		} else {
			m = node[p].Q.size();
			while(m--){
				next = node[p].Q.front();
				node[p].Q.pop();
				//cout << "Checking " << next << endl;
				if(node[next].s < 0){
					//cout << "Can go to " << next << endl;
					node[next].s = node[p].s + 1;
					move.push(next);
				}
			}
			move.pop();
		}
	}

	for(int i = 1; i <= n; i++)
		cout << i << " " << node[i].s << endl;
}