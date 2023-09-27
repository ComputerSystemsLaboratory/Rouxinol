#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main(){
	int i,j=0,n;
	for(cin>>n;j<n;j++){
		string s;cin>>s;map<string,int> m;
		for(i=1;i<s.length();i++){
			string s1=s.substr(0,i),s2=s.substr(i),r1=s1,r2=s2;
			reverse(r1.begin(),r1.end());
			reverse(r2.begin(),r2.end());
			m[s1+s2]=1;
			m[s1+s2]=1;
			m[r1+s2]=1;
			m[s1+r2]=1;
			m[r1+r2]=1;
			m[s2+s1]=1;
			m[r2+s1]=1;
			m[s2+r1]=1;
			m[r2+r1]=1;
		}
		cout<<m.size()<<endl;
	}
}