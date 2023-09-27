#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> a;
	stack<pair<int,int> > b;
	int tot=0;
	string s;
	getline(cin,s);
	for (int i=0; i<s.length(); i++){
	    if (s[i]=='\\')
			a.push(i);
		if (s[i]=='/' && !a.empty()){
			   tot+=i-a.top();
			   int tot1=i-a.top();
		      
	           while (b.size()>0 && b.top().first>a.top()){
	           	    tot1+=b.top().second;
	           	    b.pop();
			   }
			  b.push(make_pair(a.top(),tot1)); 
			  a.pop();
		}
		 
	}
	cout<<tot<<endl;
	int m=b.size();
	cout<<m;
	vector<int> ans;
	for (int i=0; i<m; i++){
		ans.push_back(b.top().second);
		b.pop();
	}
	reverse(ans.begin(),ans.end());
	for (int i=0; i<m; i++){
		  cout<<' '<<ans[i];
	}
	cout<<endl;
	return 0;
} 
