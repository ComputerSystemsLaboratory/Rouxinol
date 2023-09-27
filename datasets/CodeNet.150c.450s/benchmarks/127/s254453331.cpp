#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		set<string> ans;
		string input;
		cin>>input;
		for(int i=0;i<input.length();i++){
			string s1=input.substr(0,i),s2=input.substr(i);
			for(int k=0;k<2;k++){
				for(int l=0;l<2;l++){
					ans.insert(s1+s2);
					ans.insert(s2+s1);
					reverse(s1.begin(),s1.end());
				}
				reverse(s2.begin(),s2.end());
			}
		}
		cout<<ans.size()<<endl;
	}
}