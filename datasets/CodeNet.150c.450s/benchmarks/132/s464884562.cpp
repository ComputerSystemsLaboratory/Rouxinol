#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, p;
	while (cin >> n >> p, n) {
		int now = 0,wan=p;
		vector<int>person(n,0);
		while (true) {
			if (wan) {
				person[now]++; wan--;
				if (person[now] == p) {
					cout << now << endl;
					break;
				}
			}
			else if (person[now]) {
				wan = person[now]; person[now] = 0;
			}
			now++;
			if (now >= n)now = 0;
		}
	}
}