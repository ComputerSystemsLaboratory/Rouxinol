#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
#include<set>
#include<queue>
#include<list>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	list<int> s;
	list<int>::iterator it, endit;
	int n; cin >> n;
	pair<string, int> p;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str != "deleteFirst"&&str!="deleteLast") {
			cin >> p.second; p.first = str;
			if (p.first == "insert")s.push_front(p.second);
			else if (p.first == "delete") {
				it = s.begin(), endit = s.end();
				for (; it != endit; ++it) {
					if (*it == p.second) {
						s.erase(it);
						break;
					}
				}

			}
		}
		else if (str == "deleteFirst") {
			s.pop_front();
		}else s.pop_back();			
	}
	cout << s.front(); s.pop_front();
	for (; !s.empty();) {
		cout << " " << s.front();
		s.pop_front();
	}
	cout << endl;
}