#include <iostream>
#include<string>
#include <algorithm>
#include <queue>
#define NIL -1
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define MAX 10003
int n, m, money[20], retu[50001] = { NIL };
int maisuu = 0;
bool hantei = false;
int main() {
	retu[0] = 1;
	cin >> n >> m;
	REP(i, m) {
		cin >> money[i];
	}
	queue <int>q; q.push(0);
	while (1) {
		int siz = q.size();
		REP(i, siz) {
			int front = q.front();// cout << maisuu << endl;
			if (q.empty()) { hantei = true; break; }
			q.pop();
			REP(i, m) {
				if (front + money[i] < n) {
					if (retu[front + money[i]] == false) {
						retu[front + money[i]] = 1;
						q.push(front + money[i]);
					}
				}
				if (front + money[i] == n) {
					/*cout << maisuu << endl;*/ hantei = true; break;
				}
			}
			if (hantei) { break; }
		}
		if (hantei) { break; }
		maisuu++;
	}
	cout << maisuu + 1 << endl;;
	return 0;
}