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
int main(){
	int n;
	cin>>n;
	while(n--){
		vector<int>in(10);
		rep(i,10)cin>>in[i];
		vector<int>a,b;
		a.pb(in[0]);
		bool h=true;
		loop(i,1,10){
			if(a[a.size()-1]<in[i])a.pb(in[i]);
			else if(b.size()==0||b[b.size()-1]<in[i])b.pb(in[i]);
			else {h=false;break;}
		}
		if(h)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}