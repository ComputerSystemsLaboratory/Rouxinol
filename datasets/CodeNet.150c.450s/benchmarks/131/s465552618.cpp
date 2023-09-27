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
string str;
int l;
int ansi;
int ansj;
using namespace std;

int main(){
	int t, l;
	while(cin >> t >> l, t || l){
		vector<int> a;
		a.pb(t);
		int index = 0, j;
		bool flag = true;
		while(flag){
			vector<int> dig(l);
			int tmp = a[index];
			for(int i = 0;i <l;i++){
				dig[i] = tmp % 10,
						tmp /= 10;
			}
			sort(dig.begin(),dig.end());

			int maxa = 0, mina = 0;
			for(int i =0;i <l;i++){
				maxa *= 10;
				mina *= 10;
				maxa += dig[l-i-1];
				mina += dig[i];
			}

			a.pb(maxa - mina);
			index++;

			for(int i =0;i <index;i++){
				if(a[index] == a[i]){
					flag = false;
					j = index;
					ansi = i;
					break;
				}
			}
		}
		cout << ansi << ' ' << a[index] << ' ' << index-ansi << endl;
	}
}