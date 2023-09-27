#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>
#include <set>

using namespace std;

#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < (int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;
int main()
{

	string key[] = { "", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

	int n;

	cin >> n;
	for (int i = n; i > 0; i--){
		string str, tmp = "";
		cin >> str;

		int cnt = 0, temp = 0;
		string s = "";
		for (int i = 0; i < str.size(); i++){
			if (str[i] == '0'){
				if (!cnt) continue;
				tmp += key[temp][cnt - 1];
				temp = cnt = 0;
			}
			else{
				temp = str[i] - '0';
				if ((cnt>2) && (temp == 2 || temp == 3 || temp == 4 || temp == 5 || temp == 6 || temp == 8)) cnt -= 3;
				else if ((cnt>3) && (temp == 7 || temp == 9)) cnt -= 4;
				else if ((cnt>4) && temp == 1) cnt -= 5;
				cnt++;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}