#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
const int down[]={'0','A'-10,'a'-36};

int getIndex(char c){
	int index;
	if(c>= '0' && c<='9'){
		index = c - down[0];
	}
	if(c>= 'A' && c<='Z'){
		index = c - down[1];
	}
	if(c>= 'a' && c<='z'){
		index = c - down[2];
	}
	return index;
}

int main(){
	int n;
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		char output[62];
		rep(i,10){
			output[i] = '0'+i;
		}
		rep(i,26){
			output[i+10] = 'A'+i;
		}
		rep(i,26){
			output[i+36] = 'a'+i;
		}

		char a,b;
		rep(i,n){
			cin >> a >> b;
			output[getIndex(a)] = b;
		}

		int m;
		cin >> m;
		string s="";
		char c;
		rep(i,m){
			cin >> c;
			s += output[getIndex(c)];
		}

		cout << s << endl;
	}
}