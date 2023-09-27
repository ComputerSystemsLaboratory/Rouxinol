#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>
#include <utility>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl
#define ROUNDED(N) fixed << setprecision(N)
#define SPACE " "

typedef long long ll;
using namespace std;

int nextInt() { int n; cin >> n; return n; }
double nextDouble() { double d; cin >> d; return d; }
string nextString() { string str; cin >> str; return str; }

int main() {
	cin.tie(0); //?????±?????????????????????
	ios::sync_with_stdio(false); //printf??¨??±??????????????????

	
	int n = nextInt();
	vector<string> m;
	vector<set<string>> cn(n);
	string fr,ba;
	int s;
	for(int i=0;i<n;i++){
		m.push_back(nextString());
		cn.push_back(set<string>());
		for(int j=1;j<m[i].size();j++){
			fr = m[i].substr(0,j);
			ba = m[i].substr(j,m[i].size() - j);
			s=2;
			while(s--)
			for(int k=0;k<4;k++){
			  if(s)cn[i].insert(fr+ba);
			  else cn[i].insert(ba+fr);
			  if(k==1)reverse(fr.begin(),fr.end());
			  reverse(ba.begin(),ba.end());
			}
			//4??????????????\???fr??¨br??\????????????????????????????????§??????
		}
		cout << cn[i].size() << endl;
	}
	return 0;
}