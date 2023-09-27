#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	cin>>n;
	lp(i,n){
		string a;
		set<string> ans;
		cin>>a;
		string memo1,memo2;
		for(int i=0;i<a.size();i++){
			memo1=a.substr(0,i);
			memo2=a.substr(i);
			ans.insert(memo1+memo2);
			ans.insert(memo2+memo1);
			reverse(memo1.begin(),memo1.end());
			ans.insert(memo1+memo2);
			ans.insert(memo2+memo1);
			reverse(memo2.begin(),memo2.end());
			ans.insert(memo1+memo2);
			ans.insert(memo2+memo1);
			reverse(memo1.begin(),memo1.end());
			ans.insert(memo1+memo2);
			ans.insert(memo2+memo1);
		}
		cout<<ans.size()<<endl;
	}

	return 0;
}
