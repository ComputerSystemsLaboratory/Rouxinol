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
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
int main(){
	int n;
	while(cin>>n,n){
		vector<int>in(25*60*60);
		rep(i,n){
			int a,b,c;char d;
			cin>>a>>d>>b>>d>>c;
			in[a*60*60+b*60+c]++;
			cin>>a>>d>>b>>d>>c;
			in[a*60*60+b*60+c]--;
		}
		int ma=0;
		int co=0;
		rep(i,25*60*60){
			co+=in[i];
			ma=max(ma,co);
		}
		cout<<ma<<endl;
	}
}