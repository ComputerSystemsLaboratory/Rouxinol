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
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	map<string,int>in;
	string s;
	int ma=0;
	string mas="";
	while(cin>>s){
		if(s.size()>ma){ma=s.size();mas=s;}
		in[s]++;
	}
	int ma1=-1;string mas1="";
	for(map<string,int>::iterator it=in.begin();it!=in.end();it++){
		string d=it->first;
		if(ma1<in[d]){
			ma1=in[d];
			mas1=d;
		}
	}
	cout<<mas1<<" "<<mas<<endl;
}