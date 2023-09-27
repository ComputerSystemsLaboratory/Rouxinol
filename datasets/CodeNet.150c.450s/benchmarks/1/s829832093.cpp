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
int LIS(vi in){//Longest Increasing Subsequence
	int n=in.size();
	int r=1;
	vi out(n+1,inf);
	out[0]=-1;
	rep(i,n){
		for(int j=r;i>=0;j--){
			if(out[j]<in[i]){
				out[j+1]=in[i];
				r=max(r,j+1);
				break;
			}
		}
	}
	return r;
}
int main(){
	int n;
	cin>>n;
	vi in(n);
	rep(i,n)cin>>in[i];
	cout<<LIS(in)<<endl;
}