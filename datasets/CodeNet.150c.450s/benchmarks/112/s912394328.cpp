#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	
	int n;
	while(cin>>n && n){
		map<string,string> change;
		for(int i=0;i<n;i++){
			string s1,s2;
			cin>>s1>>s2;
			change[s1]=s2;
		}
		
		int m;
		cin>>m;
		string ans;
		for(int i=0;i<m;i++){
			string s;
			cin>>s;
			if(change.find(s)!=change.end())s=change[s];
			ans+=s;
		}
		cout<<ans<<endl;
	}
}