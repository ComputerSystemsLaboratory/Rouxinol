#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

int main() {
	multimap<int,string> words;
	string str;
	string maxstr="";
	for(;cin>>str;){
		if(maxstr.size()<str.size())maxstr=str;
		multimap<int,string>::iterator it;
		bool nw=true;
		for(it=words.begin();it!=words.end();it++){
			if(it->second==str){
				words.insert(map<int,string>::value_type(it->first-1,str));
				nw=false;
break;
			}
		}
		if(nw)words.insert(map<int,string>::value_type(-1,str));
		/*for(it=words.begin();it!=words.end();it++){
			cout<<it->second<<endl;
			cout<<1<<endl;
		}*/
		//cout<<str<<endl;
	}
	cout<<words.begin()->second<<" "<<maxstr<<endl;
	return 0;
}