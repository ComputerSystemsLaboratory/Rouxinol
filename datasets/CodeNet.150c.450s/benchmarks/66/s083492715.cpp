#include <iostream>
#include <string>
#include <set>

using namespace std;



int N, M;
string open="Opened by ", clsd="Closed by ", unk = "Unknown ";

int main() {
	cin >> N;
	
	set<string> users;
	for (int i=0; i<N; i++) {
		string user; cin >> user;
		users.insert(user);
	}
	
	cin >> M;
	bool opened = false;
	for (int i=0; i<M; i++) {
		string comes; cin >> comes;
		if (users.find(comes) != users.end()) {
			if (!opened) cout << open << comes << endl;
			else cout << clsd << comes << endl;
			opened = !opened;
		} else {
			cout << unk << comes << endl;
		}
	}
	
	return 0;
}