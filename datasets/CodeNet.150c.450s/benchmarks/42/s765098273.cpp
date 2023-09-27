#include <iostream>
#include <queue>
#include <string>
using namespace std;
typedef pair<string,int> Psi;

int main(){
	int n,q;
	cin >> n >> q;
	queue<Psi> Q;
	for(int i=0; i<n; ++i){
		Psi tmp;
		cin >> tmp.first >> tmp.second;
		Q.push(tmp);
	}
	int cnt = 0;
	while(! Q.empty()){
		Psi t = Q.front();
		Q.pop();
		if(t.second > q){
			t.second -= q;
			Q.push(t);
			cnt += q;
		} else {
			cnt += t.second;
			cout << t.first << " " <<cnt << endl;
		}
	}
	return 0;
}