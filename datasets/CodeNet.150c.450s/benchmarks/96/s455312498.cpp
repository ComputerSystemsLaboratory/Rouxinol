#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

char b1[5] = {'.', ',', '!', '?', ' '};
char b2[3] = {'a', 'b', 'c'};
char b3[3] = {'d', 'e', 'f'};
char b4[3] = {'g', 'h', 'i'};
char b5[3] = {'j', 'k', 'l'};
char b6[3] = {'m', 'n', 'o'};
char b7[4] = {'p', 'q', 'r', 's'};
char b8[3] = {'t', 'u', 'v'};
char b9[4] = {'w', 'x', 'y', 'z'};

int main()
{
	int n;
	cin >> n;
	while(n--) {
		string s, ans;
		cin >> s;
		rep(i,0,s.size()) {
			while(s[i] == '0') i++;
			int cnt = 0;
			int j = i;
			while(j+1 < s.size() && s[j+1] != '0') {
				cnt++;
				j++;
			}
			if (s[i] == '1') {
				ans += b1[cnt%5];
			}
			else if (s[i] == '2') {
				ans += b2[cnt%3];
			}
			else if (s[i] == '3') {
				ans += b3[cnt%3];
			}
			else if (s[i] == '4') {
				ans += b4[cnt%3];
			}
			else if (s[i] == '5') {
				ans += b5[cnt%3];
			}
			else if (s[i] == '6') {
				ans += b6[cnt%3];
			}
			else if (s[i] == '7') {
				ans += b7[cnt%4];
			}
			else if (s[i] == '8') {
				ans += b8[cnt%3];
			}
			else if (s[i] == '9') {
				ans += b9[cnt%4];
			}
			i = j;
			while(s[i] == '0') i++;
		}
		cout << ans << endl;
	}

	return 0;
}