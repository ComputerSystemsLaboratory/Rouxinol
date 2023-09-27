#include <iostream>
#include <queue>
#include <string>
#include <cstring>

using namespace std;
queue<pair<string, int> > Q;
int main(){
	int n, q; cin >> n >> q;
	for (int i = 0; i < n; ++i){
		string str; int tmp; cin >> str >> tmp;
		Q.push(pair<string, int>(str,tmp));
	}
	long t = 0;
	while (!Q.empty()){
		pair<string, int> tmp; tmp = Q.front();
		Q.pop();
		if (tmp.second > q){
			tmp.second -= q;
			Q.push(tmp);
			t += q;
		}
		else{
			t += tmp.second;
			cout << tmp.first << ' ' << t << '\n';
		}
	}
}