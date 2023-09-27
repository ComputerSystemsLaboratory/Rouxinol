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
	int a[4];
	int b[4];
	while(cin>>a[0]){
		rep(i,3)cin>>a[i+1];
		rep(i,4)cin>>b[i];
		int h=0,br=0;
		rep(i,4)rep(j,4)if(a[i]==b[j]){
			if(i==j)h++;
			else br++;
		}
		cout<<h<<" "<<br<<endl;
	}
}