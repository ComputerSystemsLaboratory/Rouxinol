#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int s1[]={0,0,1,1,2,2,3,3};
int s2[]={1,3,0,2,1,3,0,2};


int main(){
	int n;
	cin>>n;
	for(int l=0;l<n;l++){
		string str;
		cin>>str;
		set<string> ans;
		for(int i=1;i<str.size();i++){
			string s[4];
			s[0]=str.substr(0,i);
			s[1]=str.substr(i,str.size()-i);
			s[2]=s[0];reverse(s[2].begin(),s[2].end());
			s[3]=s[1];reverse(s[3].begin(),s[3].end());
			for(int j=0;j<8;j++)(ans.insert(s[s1[j]]+s[s2[j]]));
			
		}
		cout<<ans.size()<<endl;
	}
}