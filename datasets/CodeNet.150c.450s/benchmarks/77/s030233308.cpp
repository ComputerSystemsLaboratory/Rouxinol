#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

typedef pair<string, int> P;

int main() {
	int n;
	while(cin >> n && n){
		int x[20], y[20];
		for(int i = 0; i < n; ++i)
			cin >> x[i] >> y[i];
		int m;
		cin >> m;
		queue<P> q;
		string s;
		int d;
		for(int i = 0; i < m; ++i){
			cin >> s >> d;
			q.push(P(s, d));
		}
		int c = n, nowx = 10, nowy = 10;
		bool ca[20] = {false};
		while(!q.empty()){
			P p = q.front(); q.pop();
			for(int i = 0; i < p.second; ++i){
				string str = p.first;
				if(str == "N") nowy++;
				else if(str == "E") nowx++;
				else if(str == "S") nowy--;
				else if(str == "W") nowx--;
				
				for(int j = 0; j < n; ++j){
					if(nowx == x[j] && nowy == y[j] && !ca[j]){
						ca[j] = true;
						c--;
					}
				}
				if(c == 0)
					break;
				
			}
		}
		if(c == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}