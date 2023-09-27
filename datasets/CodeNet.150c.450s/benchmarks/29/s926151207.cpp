#include <iomanip>
#include <iostream>
#include <list>
#include <string>

#define REP(i,n) for(int i=0;i<n;++i)

using namespace std;



int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	list<int> l;
	cin >> n;
	REP(i, n) {
		string s;
		cin >> s;
		if (s[0] == 'i') {
			int x;
			cin >> x;
			l.push_front(x);
		}
		else {
			if (s[6] == 'F') {
				l.pop_front();
			}
			else if (s[6] == 'L') {
				l.pop_back();
			}
			else {
				int x;
				cin >> x;
				for (auto itr = l.begin();itr != l.end();++itr) {
					if (*itr == x) {
						l.erase(itr);
						break;
					}
				}
			}

		}
	}
	int i = 0;
	
	for (auto itr = l.begin(); itr != l.end();++itr) {
		if(i++)cout << " ";
		cout << *itr;
	}
	cout << endl;
	return 0;
}