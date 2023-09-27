#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<complex>
#define lol(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int main(){
    int cnt=0;
    string s,t;cin>>t;
    while(cin>>s){
	bool ok=true;
	if(s.size()!=t.size())continue;
	lol(i,s.size()){
	    if('A'<=s[i]&&s[i]<='Z')s[i]='a'+s[i]-'A';
	    if('A'<=t[i]&&t[i]<='Z')t[i]='a'+t[i]-'A';
	    if(s[i]!=t[i])ok=false;
	}
	if(ok)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

