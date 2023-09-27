#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
	string section;
	int all_area = 0, tmp;
	stack<int> down;
	stack< pair<int, int> > areas;

	cin >> section;

	for(int i = 0;i < section.size();i++) {
		if(section.at(i) == '\\') {
			down.push(i);
		} else if(section.at(i) == '/' && !down.empty()) {
			tmp = down.top(); down.pop();
			all_area += (i - tmp);
			int a = i - tmp;

			while(!areas.empty() && areas.top().first > tmp) {
				a += areas.top().second; areas.pop();
			}

			areas.push(make_pair(tmp, a));
		} 
	}

	vector<int> ans;

	while(!areas.empty()) {
		ans.push_back(areas.top().second); areas.pop();
	}

	reverse(ans.begin(), ans.end());

	cout << all_area << endl;

	cout << ans.size();

	for(int i = 0;i < ans.size();i++) {
		cout << " " << ans.at(i);
	}

	cout << endl;

	return 0;
}