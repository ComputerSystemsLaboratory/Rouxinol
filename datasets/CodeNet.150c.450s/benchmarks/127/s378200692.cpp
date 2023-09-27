#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#define Z(z)m[a+b]=1;m[b+a]=1;reverse(z.begin(),z.end());
using namespace std;
int main(){
	int i,j=0,n;
	for(cin>>n;j<n;j++){
		string s,a,b;cin>>s;map<string,int> m;
		for(i=1;i<s.length();i++){
			a=s.substr(0,i),b=s.substr(i);
			Z(a)Z(b)Z(a)Z(b)
		}
		cout<<m.size()<<endl;
	}
}