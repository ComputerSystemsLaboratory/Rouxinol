#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;


int main(){
	stack<int> a;
	stack<pair<int, int>> b;
	int S = 0;
	int left = 0;
	string s;
	cin >> s;
	rep(i, s.size()){
		if(s.at(i) == '\\'){
			a.push(i);
		}else if(s.at(i) == '/'){
			if(a.empty()) continue;
			int d = a.top();
			int as =(i-d);
			S += as;
			a.pop();
			if(b.empty()){
				b.push(make_pair(d, i-d));
			}else{
				while(!b.empty() && b.top().first > d){
					as += b.top().second;
			    	b.pop();
					}
				b.push(make_pair(d, as));
			}
		}
	}

	cout << S << endl;
	vector<int> L(0);
	int c = 0;
	while(!(b.empty())){
		L.push_back(b.top().second);
		b.pop();
		c++;
	}
	cout << c;
	if(c == 0){
		cout << endl;
	}else{
		cout << " ";
	}
	reverse(L.begin(), L.end());
	rep(i, c){
		cout << L.at(i);
		if(i == c-1){
			cout << endl;
		}else{
			cout << " ";
		}
	}
}

