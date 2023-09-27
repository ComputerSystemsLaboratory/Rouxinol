#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
	map<string,int> mp;
	string s;
	getline(cin,s);
	vector<string> sent;

	int len=s.size();




	string maxStr="";
	int maxNum=-1;

	string tmp="";
	rep(i,len){
		if(s[i]!=' '){
			tmp+=s[i];
		}
		else{
			mp[tmp]+=1;
			sent.pb(tmp);
			if(maxNum<(int)tmp.size()){
				sent.pb(tmp);
				maxStr=tmp;
				maxNum=tmp.size();
			}
			tmp="";
		}
	}
	mp[tmp]+=1;
	sent.pb(tmp);
	if(maxNum<(int)tmp.size()){
		sent.pb(tmp);
		maxStr=tmp;
		maxNum=tmp.size();
	}

	string str="";
	int num=-1;
	for(int i=0;i<sent.size();i++){
		if(num<mp[sent[i]]){
			str=sent[i];
			num=mp[sent[i]];
		}

	}
	cout<<str<<" "<<maxStr<<endl;


	return 0;
}