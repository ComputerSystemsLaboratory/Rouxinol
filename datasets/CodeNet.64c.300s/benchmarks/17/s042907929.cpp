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
int func(int a,int b){
	return a*(100+b)/100.0;
}
int main(){
	int a,b,c;
	while(cin>>a>>b>>c,a+b+c){
		int ma=-1;
		loop(i,1,c)loop(j,1,c)if(func(i,a)+func(j,a)==c)ma=max(ma,func(i,b)+func(j,b));
		cout<<ma<<endl;
	}
}