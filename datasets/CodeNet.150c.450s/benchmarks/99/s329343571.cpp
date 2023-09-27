#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <assert.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ALL(s) begin(s),end(s)
#define ITE(c) typeof((c).begin())
#define VIEW(dat) for(auto v : dat){cout<<v<<endl;}
#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))


using namespace std;

string valOf(int n){ stringstream ss;ss<<n;return ss.str();}
int    valOf(string s){return atoi(s.c_str());}
int    valOf(char s){return (unsigned int)(s - '0');}

int enc(string s){
	int rl=0;
	for(int i=s.size();i>=0;i--){
		if(s[i]=='m'){
			if(i-1>=0){ 
				if(s[i-1]!='m'&&s[i-1]!='c'&&s[i-1]!='x'){ 
					rl+=valOf(s[i-1])*1000;
				}else{
					rl+=1000;
				}
			}else{
				rl+=1000;
			}
		}else if(s[i]=='c'){
			if(i-1>=0){
				if(s[i-1]!='m'&&s[i-1]!='c'&&s[i-1]!='x'){ 
					 rl+=valOf(s[i-1])*100;
				}else{
					rl+=100;
				}
			}else{
				rl+=100;
			}
		}else if(s[i]=='x'){
			if(i-1>=0){
				if(s[i-1]!='m'&&s[i-1]!='c'&&s[i-1]!='x'){ 
					 rl+=valOf(s[i-1])*10;
				}else{
					rl+=10;
				}
			}else{
				rl+=10;
			}
		}else if(s[i]=='i'){
			if(i-1>=0){
				if(s[i-1]!='m'&&s[i-1]!='c'&&s[i-1]!='x'){ 
					 rl+=valOf(s[i-1]);
				}else{
					rl+=1;
				}
			}else{
				rl+=1;
			}
		}
	}
	return rl;
}

string deco(int a){
	string rls="";
	int tmp=0;
	while(a>=1000){	tmp++;	a-=1000;}
	if(tmp){ 
		if(tmp!=1){
			rls+=valOf(tmp)+"m";
		}else{
			rls+="m";
		}
	}
	tmp=0;
	while(a>=100){	tmp++;	a-=100;}
	if(tmp){ 
		if(tmp!=1){
			rls+=valOf(tmp)+"c";
		}else{
			rls+="c";
		}
	}
	tmp=0;
	while(a>=10){	tmp++;	a-=10;}
	if(tmp){ 
		if(tmp!=1){
			rls+=valOf(tmp)+"x";
		}else{
			rls+="x";
		}
	}
	if(a){
		if(a!=1){
			rls+=valOf(a)+"i";
		}else{
			rls+="i";
		}
	}
	return rls;
}

int main(){
	int N;
	
	//ifstream cin("in.txt");
	
	cin>>N;
	while(N--){
		string a, b;
		cin>>a>>b;
		cout<<deco(enc(a)+enc(b))<<endl;;
	}
	
	
}