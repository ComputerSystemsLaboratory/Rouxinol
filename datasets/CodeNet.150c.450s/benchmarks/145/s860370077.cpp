#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	map<string,int> table;
	string s,f,l;
	size_t n=0;
	while(cin>>s){
		//if(s=="0") break;
		table[s]++;
		if(table[s]>n){
			n=table[s]; f=s;
		}if(s.size()>l.size()) l=s;
	}
	o(f<<" "<<l);
}