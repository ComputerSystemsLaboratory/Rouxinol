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
bool h[1000010]={false};
int main(){
	int n;
	while(cin>>n){
		int co=0;
		rep(i,10)rep(j,10)rep(k,10)rep(q,10)if(i+j+k+q==n)co++;
		cout<<co<<endl;
	}
}