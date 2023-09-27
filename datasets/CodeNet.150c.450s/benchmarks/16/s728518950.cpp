#include <stack>
#include <utility>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	stack<int>s;
	stack< pair<int,int> >rep;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '\\') { s.push(i); }
		if (str[i] == '/') {
			if (!s.empty()) {
				int k = s.top();
				s.pop();
				int p=0;
				while (!rep.empty() && (rep.top()).first>k) { p+=(rep.top()).second; rep.pop(); }
				 { rep.push(pair<int, int>(k, i - k + p)); }
			}
		}
		if (str[i] != '\\'&&str[i] != '/'&&str[i] != '_')break;
	}int ans = 0; int a[20009]; int cnt = 0; int ss = rep.size();
	for (int i = 0; i <ss; i++) {
		a[i] = (rep.top().second); ans += a[i]; rep.pop();
	}
	cout << ans << endl;
	cout << ss;
	for (int i = ss-1; i >=0; i--) {
		cout <<" "<<a[i];
	}
	cout << endl;
    return 0;
}