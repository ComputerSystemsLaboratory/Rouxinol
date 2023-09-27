#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;

struct Area {
	int a;
	int d;
};


int main() {
	string str;
	stack<int> s;
	queue<int> q;
	vector<Area> as;
	Area area;
	int total = 0;

	area.a = 0;
	area.d = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '/') {

			if (!s.empty()) {
				area.a = i - s.top();
				area.d--;

				total += area.a;
				for (int i = 0; i < as.size(); i++) {
					if (as[i].d > area.d) {
						area.a += as[i].a;
						as.erase(as.begin() + i);
						i--;
					}
				}
				as.push_back(area);
				area.a = 0;
				s.pop();
				if (s.empty()) {
					q.push(as[0].a);
					
					area.a = 0;
					area.d = 0;
					as.clear();
				}
			}
		}
		else if (str[i] == '\\') {
			s.push(i);
			area.d++;
		}
	}

	for (int i = 0; i < as.size(); i++) {
		q.push(as[i].a);
	}

	cout << total << endl;
	cout << q.size();
	while (!q.empty()) {
		cout << " " << q.front();
		q.pop();
	}
	cout << endl;

	return 0;
}