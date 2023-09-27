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

vector<string> res;

int main() {
	int n=in();
	while(n--){
		res.clear();
		string str;
		cin>>str;
		int i;
		for(i=1;i<str.size();i++){
			string buf,buf1,buf2;
			buf1=str.substr(0,i);
			buf2=str.substr(i);
			buf=buf1+buf2;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			buf=buf2+buf1;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			reverse(buf2.begin(),buf2.end());
			buf=buf1+buf2;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			buf=buf2+buf1;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			reverse(buf1.begin(),buf1.end());
			reverse(buf2.begin(),buf2.end());
			buf=buf1+buf2;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			buf=buf2+buf1;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			reverse(buf2.begin(),buf2.end());
			buf=buf1+buf2;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
			buf=buf2+buf1;
			if(find(res.begin(),res.end(),buf)==res.end())res.push_back(buf);
		}
		cout<<res.size()<<endl;
	}
	return 0;
}