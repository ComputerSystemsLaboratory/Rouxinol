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
  string a;
	int L;
	while(cin>>a>>L,L){
		while(a.size()<L)a = "0" + a;
		vector<vector<int>> num(31,vector<int>(L,0));
		REP(i,L)
		num[0][i] = a[i] - '0';
		REP(i,30){
			vector<int> a1(L);
			REP(j,L)a1[j] = num[i][j];
			sort(a1.begin(),a1.end());
			vector<int> a2(a1);
			reverse(a2.begin(),a2.end());
			for(int j = L-1;j>=0;j--)
				if(a2[j]-a1[j]+num[i+1][j]<0&&j>0){
					num[i+1][j-1]--;
					num[i+1][j] += 10+ a2[j] - a1[j];
				}else{
					num[i+1][j] += a2[j] - a1[j];
			}
			REP(j,i){
				bool is_agree=true;
				REP(k,L){
					if(num[i][k] != num[j][k]){
						is_agree = false;
						break;
					}
				}
				if(is_agree){
					cout << j << " ";
					int tmp=0;
					REP(p,L)tmp += pow(10,L-p-1)*num[j][p];
					cout << tmp;
					cout << " " << i-j << endl;
					i+=300;
					break;
				}
			}
		}
	}
	return 0;
}