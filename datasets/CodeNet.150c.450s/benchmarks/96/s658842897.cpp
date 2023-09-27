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

string ch[]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main() {
	int n=in();
	while(n--){
		string str;
		cin>>str;
		int i;
		int a=0,b=0;
		for(i=0;i<str.size();i++){
			if(str[i]=='0'){
				if(b!=0)cout<<ch[a][(b-1)%ch[a].size()];
				b=0;
			}else{
				a=str[i]-'1';
				b++;
			}
		}
		cout<<endl;
	}
	return 0;
}