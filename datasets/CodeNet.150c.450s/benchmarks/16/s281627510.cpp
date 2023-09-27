#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
	stack<int> s1;
	stack < pair<int, int> > s2;
	string str;
	pair<int,int> p;
	cin >> str;
	for (int i = 0; str[i] !=NULL; i++) {
		if (str[i] != '/') {
			if (str[i] == '\\')
				s1.push(i);
		}
		else {
			if (s1.size() > 0) {
				p.first = s1.top(); s1.pop();
				p.second = 0;
				while (s2.size() > 0 && s2.top().first > p.first) {
					p.second += s2.top().second;
					s2.pop();
				}
				p.second += (i - p.first);
				s2.push(p);
			}
		}
	}
	

	int sum = 0;
	vector<int> vec;
	while (!s2.empty()) {
		vec.push_back(s2.top().second); s2.pop();
	}
	reverse(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
		sum += vec[i];
	cout << sum << endl;
	cout << vec.size();
	for (int i = 0; i < vec.size(); i++) {
		cout << " ";
		cout << vec[i];
	}
	cout << endl;

	return 0;
}