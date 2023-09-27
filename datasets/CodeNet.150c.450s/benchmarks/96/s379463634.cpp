#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) cerr << #x << "=" << static_cast<bitset<16> >(x) << endl;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

const int INF = 10000000;
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};
using namespace std;
typedef long long  ll;
typedef pair<int, int> P;

/** Problem2006 : Keitai Message **/
int main()
{
	string list[10] = {"#", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	int l[10] = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};
	int n;
	cin >> n;
	rep(k, n) {
		string in, ans;
		cin >> in;
		int tmp=-1; char c='#';
		rep(i, in.length()) {
			if (in[i]!='0') {
				tmp++; tmp%=l[in[i]-'0'];
				c = list[in[i]-'0'][tmp];
			} else {
				if (c != '#')
					ans+=c;
				tmp=-1;
				c='#';
			}
		}
		cout << ans << endl;
	}
}