#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	vector<vector<int>> R;
	for(int i=0;i<N;i++){
		vector<int> X;
		R.push_back(X);
	}
	for(int i=0;i<M;i++){
		int A, B;
		cin >> A >> B;
		A--;
		B--;
		R[A].push_back(B);
		R[B].push_back(A);
	}
	int mark[N];
	for(int i=0;i<N;i++){
		mark[i] = -1;
	}
	mark[0] = 0;
	queue<int> que;
	que.push(0);
	while(!que.empty()){
		int P = que.front();
		que.pop();
		for(int i=0;i<(int)R[P].size();i++){
			if(mark[R[P][i]] == -1){
				que.push(R[P][i]);
				mark[R[P][i]] = P;
			}
		}
	}
	cout << "Yes" << endl;
	for (int i=1;i<N;i++){
		cout << mark[i] + 1 << endl;
	}
}
	