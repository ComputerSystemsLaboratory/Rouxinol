#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
using namespace std;

int main() {
	const int MAX=100000;
	int n, q, time=0;
	cin >> n >> q;
	pair<string, int> S[MAX], A[MAX];
	queue<int> Q_num;
	queue<string> Q_str;
	
	for(int i=0; i<n; i++){
		cin >> S[i].first >> S[i].second;
		Q_str.push(S[i].first);
		Q_num.push(S[i].second);
	}
	
	while(!Q_str.empty()){
		int a = Q_num.front();
		string s = Q_str.front();
		Q_num.pop();
		Q_str.pop();
		if(a <= q){
			time = time + a;
			cout << s << " " << time << endl;
		}
		else{
			time = time + q;
			Q_num.push(a-q);
			Q_str.push(s);
		}
	}
	
}