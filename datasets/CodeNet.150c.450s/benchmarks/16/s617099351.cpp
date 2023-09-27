#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	stack<long> S1;
	stack<pair<long, long> > S2;
	char ch;
	long sum = 0;
	for (long i = 0; cin >> ch; i++){
		if (ch == '\\') S1.push(i);
		else if (ch == '/' && S1.size() > 0){
			long j = S1.top();
			S1.pop();
			sum += i - j;
			long a = i - j;
			while (S2.size() > 0 && S2.top().first > j){
				a += S2.top().second; S2.pop();
			}
			S2.push(make_pair(j, a));
		}
	}

	// vector<long> ans;
	// while (S2.size() > 0){
	// 	ans.push_back(S2.top().second);
	// 	S2.pop();
	// }
	// reverse(ans.begin(), ans.end());
	// cout << sum << endl;
	// cout << ans.size();
	// for (long i = 0; i < ans.size(); i++){
	// 	cout << " ";
	// 	cout << ans[i];
	// }
	// cout << endl;

	stack<long> ans;
	while (S2.size() > 0){
		ans.push(S2.top().second);
		S2.pop();
	}
	cout << sum << endl;
	cout << ans.size();
	while (ans.size() > 0){
		cout << " ";
		cout << ans.top();
		ans.pop();
	}
	cout << endl;
	return 0;
}