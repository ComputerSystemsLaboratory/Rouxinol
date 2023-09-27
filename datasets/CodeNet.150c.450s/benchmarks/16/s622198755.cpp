#include<iostream>
#include<list>
#include<stack>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	string s;cin >> s;
	stack<int> st;
	stack<pair<int,int> > st2;
	int ans;
	int j=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == '\\'){ 
			st.push(i);
		}else if(s[i] == '/' && !st.empty()){
			int k = st.top();st.pop();
			ans += i-k;
			j = i-k;
		
			while(st2.size()>0 && st2.top().first > k){
				j += st2.top().second;st2.pop();
			}
			st2.push(make_pair(k,j));
		}
	}
	cout << ans << endl;
	int limit = st2.size();
	cout << limit;
	vector<int> a(limit);
	for(int i=0;i<limit;i++){
		a[i] = st2.top().second;
		st2.pop();
	}
	reverse(a.begin(),a.end());
	for(int i=0;i<limit;i++){
		cout << " " <<a[i];
	}
	cout << endl;
	return 0;
}
