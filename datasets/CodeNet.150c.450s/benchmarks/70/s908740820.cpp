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
	string s[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int d[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int a,b;
	while(cin>>a>>b,a+b){
		int co=b;
		a--;
		while(a){a--;co+=d[a];}
		cout<<s[co%7]<<endl;
	}
}