#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	stack<int> s;
	stack<pair<int, int>> s2;
	int sum = 0;
	for(int i = 0; i < str.length(); ++i){
		if(str[i] == '\\'){
			s.push(i);
		}
		else if(str[i] == '/' && !s.empty()){
			int a = s.top();
			s.pop();
			sum += i - a;
			int b = i - a;
			while(!s2.empty() && s2.top().first > a){
				b += s2.top().second;
				s2.pop();
			}
			s2.push(make_pair(a, b));
		}
	}
	cout << sum << endl;

	vector<int> ans;
	while(!s2.empty()){
		ans.push_back(s2.top().second);
		s2.pop();
	}
	cout << ans.size();
	for(int i = ans.size() - 1; i >= 0; --i){
		cout << " " << ans[i];
	}
	cout << endl;

	return 0;
}