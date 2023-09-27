#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	string s; cin >> s;
	stack<int> sti;
	stack<pair<int, int>> stp;
	int sum = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '\\') sti.push(i);
		else if(s[i] == '/'){
			if(sti.empty()) continue;
			int t = sti.top(); sti.pop();
			pair<int, int> p = make_pair(t, i-t);
			sum += i-t;
			while(!stp.empty() && stp.top().first > t){
				pair<int, int> q = stp.top(); stp.pop();
				p.second += q.second;
			}
			stp.push(p);
		}
	}
	cout << sum << endl;
	int n = stp.size();
	if(!n){
		cout << n << endl;
		return 0;
	}
	cout << n << " ";
	vector<int> l(n);
	for(int i=0; i<n; i++){
		pair<int, int> p = stp.top(); stp.pop();
		l[n-1-i] = p.second;
	}
	for(int i=0; i<n; i++){
		cout << l[i];
		if(i < n-1) cout << " ";
	}
	cout << endl;
}
