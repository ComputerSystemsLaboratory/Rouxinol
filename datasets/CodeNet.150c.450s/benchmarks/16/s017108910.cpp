#include<iostream>
#include<stack>
#include<map>
#include<vector>
using namespace std;
stack<int>a;
stack<pair<int,int> >a1;
int sum;//统计总共有多少洪水
int part;

int main()
{
	int i = 0;
	char c;
	while (cin >> c) {
		if (c == '\\'){
			a.push(i);
		}
		else if (c == '/'&&!a.empty()) {
			sum+= i - a.top();
			part = i - a.top();
			while (!a1.empty() && a1.top().first > a.top()) {
				part += a1.top().second;
				a1.pop();
			}
			a1.push(make_pair(a.top(), part));
			a.pop();
		}
		i++;
	}
	vector<int>ans;
	while (!a1.empty()) {
		ans.push_back(a1.top().second);
		a1.pop();
	}
	cout << sum << endl;
	cout << ans.size();
	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << " " << ans[i];
	}
	cout << endl;
    return 0;
}



