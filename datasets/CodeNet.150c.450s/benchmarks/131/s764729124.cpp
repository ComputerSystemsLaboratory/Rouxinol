#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
string itos(int a){
	string s="";
	while(a){
		s=(char)(a%10+'0')+s;
		a/=10;
	}
	return s;
}
int main(){
	string s;
	int n;
	while(cin>>s>>n,n){
		map<string,int>out;
		int co=1;
		while(n!=s.size())s="0"+s;
		out[s]=co;
		while(1){
			co++;
			int tmp[10]={0};
			rep(i,s.size())tmp[s[i]-'0']++;
			int ma=0,mi=0;
			rep(i,10)rep(j,tmp[i])mi=mi*10+i;
			for(int i=9;i>=0;i--)rep(j,tmp[i])ma=ma*10+i;
			int after=ma-mi;
			s=itos(after);
			while(n!=s.size())s="0"+s;
			if(out[s]){
				cout<<out[s]-1<<" "<<atoi(&s[0])<<" "<<co-out[s]<<endl;
				break;
			}
			out[s]=co;
		}
	}
}