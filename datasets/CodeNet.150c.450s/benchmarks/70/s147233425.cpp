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
	int data[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	string out[7]={
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday",
	"Monday",
	"Tuesday"
	};
	int a,b;
	while(cin>>a>>b,a+b){
		int sum=b;
		rep(i,a-1)sum+=data[i];
		cout<<out[sum%7]<<endl;
	}
}