#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	// stack<long> S1, ans;
	// stack<pair<long, long> > S2;
	// char ch;
	// long sum = 0;
	// for (long i = 0; cin >> ch; i++){
	// 	if (ch == '\\') S1.push(i);
	// 	else if (ch == '/' && S1.size() > 0){
	// 		long j = S1.top(); S1.pop();
	// 		sum += i - j;
	// 		long a = i - j;
	// 		while (S2.size() > 0 && S2.top().first > j){
	// 			a += S2.top().second; S2.pop();
	// 		}
	// 		S2.push(make_pair(j, a));
	// 	}
	// }
	// cout << sum << endl << S2.size();
	// while (S2.size() > 0){ans.push(S2.top().second); S2.pop();}
	// while (ans.size() > 0){cout << " " << ans.top(); ans.pop();}
	// cout << endl;
	vector<long> S1, ans;
	vector<pair<long, long> > S2;
	char ch;
	long sum = 0;
	for (long i = 0; cin >> ch; i++){
		if (ch == '\\') S1.insert(S1.begin(), i);
		else if (ch == '/' && S1.size() > 0){
			long a = i - S1[0];
			sum += a;
			while (S2.size() > 0 && S2[0].first > S1[0]){
				a += S2[0].second; S2.erase(S2.begin());
			}
			S2.insert(S2.begin(), make_pair(S1[0], a));
			S1.erase(S1.begin());
		}
	}
	cout << sum << endl << S2.size();
	while (S2.size() > 0){cout << " " << S2[S2.size()-1].second; S2.erase(S2.end());}
	cout << endl;
	return 0;
}