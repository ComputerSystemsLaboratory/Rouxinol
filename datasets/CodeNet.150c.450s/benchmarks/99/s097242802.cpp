#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <complex>
#include <fstream>
#include <stdio.h>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<double> VEC;
typedef vector<VEC> MAT;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef vector<LL> VLL;

//container util

//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define MT(a,b,c) MP(a, MP(b, c))
#define T1 first
#define T2 second.first
#define T3 second.second


//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define EPS 1e-8

map<int, string> m;

int strtoi(string str){
	int ret = 0;
	int k=str.find('m');
	if(k!=-1){
		if(k==0||(k!=0&&isdigit(str[k-1])==false))ret+=1000;
		else ret+=(str[k-1]-'0')*1000;
	}
	k=str.find('c');
	if(k!=-1){
		if(k==0||(k!=0&&isdigit(str[k-1])==false))ret+=100;
		else ret+=(str[k-1]-'0')*100;
	}
	k=str.find('x');
	if(k!=-1){
		if(k==0||(k!=0&&isdigit(str[k-1])==false))ret+=10;
		else ret+=(str[k-1]-'0')*10;
	}
	k=str.find('i');
	if(k!=-1){
		if(k==0||(k!=0&&isdigit(str[k-1])==false))ret+=1;
		else ret+=(str[k-1]-'0')*1;
	}
	return ret;
}

string itos(int t){
	string ret;
	int p=1000;
	while(p>0){
		if(t/p==1)ret += m[p];
		else if(t/p!=0){
			ret+=t/p+'0';
			ret+=m[p];
		}
		t%=p;
		p/=10;
	}
	return ret;
}

int main(){
	m[1] = "i";
	m[10] = "x";
	m[100] = "c";
	m[1000] = "m";
	int n;
	cin >> n;
	REP(i,n){
		string str1,str2;
		cin>>str1>>str2;
		cout<<itos(strtoi(str1)+strtoi(str2))<<endl;
	}
}