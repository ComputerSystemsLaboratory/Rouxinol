#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define REP(a) while(a--)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n;
	cin>>n;
	REP(n){
		vi in(3);
		rep(i,3)cin>>in[i];
		sort(all(in));
		if(in[0]*in[0]+in[1]*in[1]==in[2]*in[2])cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}