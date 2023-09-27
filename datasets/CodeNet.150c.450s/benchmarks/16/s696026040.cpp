#include <bits/stdc++.h>
using namespace std;
stack<pair<int , int> > s2;

int getAreas(string str){
	stack<int> st;
	int sum = 0,idx,area=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='\\'){
			st.push(i);
		}else if(str[i]=='/' && !st.empty()){
				idx = st.top();
				sum += i - idx;
				area = i-idx;
				st.pop();

			while(!s2.empty() && s2.top().first > idx){
				area += s2.top().second; s2.pop();
			}
			s2.push(make_pair(idx,area));
		}
	}
	return sum;
}

int main(){
	std::vector<int> v;
	string str;
	cin >> str;
	cout << getAreas(str) << endl;

	while(!s2.empty()){
		v.push_back(s2.top().second);
		s2.pop();
	}
	reverse(v.begin(),v.end());
	cout << v.size();
	for(int i=0;i<v.size();i++){
		cout << " ";
		cout << v[i];
	}
	cout << endl;
	return 0;
}