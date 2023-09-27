#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,t) for(int i = s; i < t ; i++)
#define SZ(a) (int)a.size()

char img[9][5] = {
	{ '.',',','!','?',' ' },
	{ 'a','b','c' },
	{ 'd','e','f' },
	{ 'g','h','i' },
	{ 'j','k','l' },
	{ 'm','n','o' },
	{ 'p','q','r','s' },
	{ 't','u','v' },
	{ 'w','x','y','z' },
};
int in1[9] = { 5,3,3,3,3,3,4,3,4 };

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int Case;
	cin >> Case;
	FOR(kim, 0, Case) {
		string s;
		cin >> s;
		int i = 0;
		while (i != SZ(s)) {
			int co = 0;
			while (s[i] != '0') {
				co++;
				i++;
			}
			if (co) {
				int target = s[i - 1] - '0' - 1;
				int pos = (co - 1) % (in1[target]);
				cout << img[target][pos];
			}
			i++;
		}
		cout << endl;
	}
}
