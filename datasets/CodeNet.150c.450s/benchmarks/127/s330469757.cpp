#include <bits/stdc++.h>
using namespace std;
#define reps(i,j,k) for(int i=j;i<k;i++)
#define rep(i,j) reps(i,0,j)
string rev(string s){
	reverse(s.begin(),s.end());
	return s;
}
int main(){
	int m;
	cin>>m;
	while(m--){
		string str;
		cin>>str;
		set<string> S;
		for(int i = 0;i < str.size()-1;i++){
			string t = "";
			for(int j = 0;j <= i;j++){
				t += str[j];
			}
			string T = "";
			for(int j = i+1;j < str.size();j++){
				T += str[j];
			}
			S.insert(t+T);
			S.insert(T+t);
			S.insert(rev(t)+T);
			S.insert(t+rev(T));
			S.insert(rev(t)+rev(T));
			S.insert(rev(T)+t);
			S.insert(T+rev(t));
			S.insert(rev(T)+rev(t));

		}
		cout<<S.size()<<endl;
	}
	return 0;
}