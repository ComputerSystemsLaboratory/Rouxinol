#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
int main() {
	int h;
	while (cin >> h, h) {
		vector<int>V[5];
		rep(i, h) {
			rep(j, 5) {
				int d; cin >> d;
				V[j].push_back(d);
			}
		}
		rep(i, 5)reverse(V[i].begin(), V[i].end());
		int ans = 0;bool update;
		do {
			update = 0;
			rep(i, h) {
				rep(j, 3) {
					int k;
					for (k = 0; j + k<5 && V[j + k].size()>i&&V[j][i] == V[j + k][i]; k++);
					if (k >= 3) {
						update = 1;
						ans += V[j][i]*k;
						rep(t, k)V[j + t][i] = 0;
					}
				}
			}
			rep(i, 5) {
				rep(j, V[i].size()) {
					if (!V[i][j]) {
						V[i].erase(V[i].begin() + j);
						j--;
					}
				}
			}
		} while (update);
		cout<<ans<<endl;
	}
}
