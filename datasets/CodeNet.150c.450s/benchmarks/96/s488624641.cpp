#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main(){
	int n;
	cin >> n;
	int i,j;
	string s;
	char trans[10][5];
	for (int i = 0; i < 4; i++)trans[0][i] = '0';
	trans[1][0] = '.'; trans[1][1] = ','; trans[1][2] = '!'; trans[1][3] = '?';
	for (i = 2; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			if (i != 9 &&i!=7&& j == 3)trans[i][j] = '0';
			else if(i<8) trans[i][j] = 'a' + (i - 2) * 3 + j;
			else trans[i][j] = 't' + (i - 8) * 3 + j;
		}
	}
	char trans1[5] = { '.',',','!','?',' ' };
	for (i = 0; i < n; i++) {
		cin >> s;
		int len = s.length();
		int check = 0;
		int memo = 0;
		for (j = 0; j < len; j++) {
			if (check > 0 && s[j] == '0') {
				if (memo == 1) cout << trans1[(check - 1) % 5];
				else if (memo == 7 || memo == 9) {
					cout << trans[memo][(check-1) % 4];
				}
				else cout << trans[memo][(check-1) % 3];
				check = 0;
			}
			else if (s[j] != '0') {
				memo = s[j] - '0'; check++;
			}
		}
		cout << endl;
	}
	return 0;
}
