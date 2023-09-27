#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, m, s, t, q, i, j;
	int id, color = 0;
	bool answer_yes = false;

	// enter
	cin >> n >> m;
	vector< vector<int> > Adj(n);
	vector<int> Stack;
	vector<int> Check(n, 0);
	vector<int>::iterator it, itend;
	for (i = 0; i < m; i++) {
		cin >> s >> t;
		Adj[s].push_back(t);
		Adj[t].push_back(s);
	}
	/*for (i = 0; i < n; i++) {
		cout << "\n" << i << " : " << flush;
		for (auto it2 = Adj[i].begin(); it2 != Adj[i].end(); it2++) {
			cout << *it2 << " " << flush;
		}
	}
	cout << endl;*/

	// calculate
	for (i = 0; i < n; i++) {
		if (Check[i] == 0) {
			color++;
			Stack.push_back(i);
			Check[i] = color;
			while (!Stack.empty()) {
				id = Stack.back();
				//cout << "\nid : " << id << " color : " << color << endl;
				itend = Adj[id].end();
				for (it = Adj[id].begin(); it != itend; it++) {
					if (!Check[*it]) {
						Stack.push_back(*it);
						Check[*it] = color;
						break;
					}
				}
				if (it == itend) {
					Stack.pop_back();
				}
			}
		}
	}

	//find
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> s >> t;		
		if (Check[s] == Check[t]) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	
	return 0;
}