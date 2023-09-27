#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
static const int MAX = 100000;
int n;
int color[MAX];
vector<int> v[MAX];
void b(int s, int t){
	stack<int> S;
	S.push(s);
	int tp;
	color[s] = t;
	while (!S.empty()){
		int tp = S.top(); S.pop();
		for (int i = 0; i < v[tp].size(); i++){
			if (color[v[tp][i]] == MAX){
				color[v[tp][i]] = t;
				S.push(v[tp][i]);
			}
		}
	}
}
void a(){
	for (int i = 0; i < n; i++){
		color[i] = MAX;
	}
	int id = 0;
	for (int i = 0; i < n; i++){
		id++;
		if(color[i] == MAX)b(i,id);
	}
}
int main(){
	int m, s, t;
	int q;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> s >> t;
		v[s].push_back(t);
		v[t].push_back(s);
	}
	a();
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> s >> t;
		if (color[s] == color[t]) cout << "yes" << endl;
		else cout << "no" << endl;
 	}
	return 0;
}