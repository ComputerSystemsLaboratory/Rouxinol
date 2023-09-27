#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e9;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
string tostring(int a){
	string s="";
	while(a){
		s+=(char)('0'+a%10);
		a/=10;
	}
	reverse(all(s));
	return s;
}
int main(){
	string s;int n;
	while(cin>>s>>n,n){
		while(s.size()!=n)s="0"+s;
		map<string,int>m;
		m[s]=1;
		int co=1;
		while(1){
			sort(all(s));
			int a=atoi(&s[0]);
			reverse(all(s));
			int b=a-atoi(&s[0]);
			b=abs(b);
			s=tostring(b);
			while(s.size()!=n)s="0"+s;
			if(m[s])break;
			co++;m[s]=co;
		}
		cout<<m[s]-1<<" "<<atoi(&s[0])<<" "<<co-m[s]+1<<endl;
	}
}