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
	int n,m;
	while(cin>>n>>m,n+m){
		vi a(n),b(m);
		rep(i,n)cin>>a[i];
		rep(i,m)cin>>b[i];
		map<int,int>in1;
		rep(i,n){
			int sum=0;
			loop(j,i,n){
				sum+=a[j];
				in1[sum]++;
			}
		}
		int co=0;
		rep(i,m){
			int sum=0;
			loop(j,i,m){
				sum+=b[j];
				co+=in1[sum];
			}
		}
		cout<<co<<endl;
		
		
	}
}