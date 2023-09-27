#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <iomanip>
#include <math.h> 
#include <stack>
#include <queue>
#include <bitset>
#include <cstdlib>
#include <tuple>
#include <cctype>
#include <ctype.h>
#include <set>

using namespace std;

int main() {
	int i, j, k;
	int n, q;
	//vector<vector<short>>(1, vector<short>(1));
	vector<set<short>>num;
	vector<short>flag(10007, -1);
	int cnt = 0;
	vector<short>ans;

	cin >> n >> q;

	for (i = 0; i < q; i++) {
		short com, x, y;

		cin >> com >> x >> y;

		//x--; y--;

		if (com == 0) {
			if (flag[x] == -1 && flag[y] == -1) {
				set<short>st;

				st.insert(x);
				st.insert(y);
				num.push_back(st);
				flag[x] = num.size()-1;
				flag[y] = num.size()-1;

			}
			else if (flag[x] != -1 && flag[y] != -1) {
				if (flag[x] == flag[y]) {

				}
				else if (flag[x] < flag[y]) {
					short yy = flag[y];
					//for (auto itr = num[flag[y]].begin(); itr != num[flag[y]].end(); ++itr) {
					for (auto itr = num[yy].begin(); itr != num[yy].end(); ++itr) {
						num[flag[x]].insert(*itr);
						flag[*itr] = flag[x];
					}
				
				//	num.erase(num.begin() + yy);
					num[yy].erase(num[yy].begin(), num[yy].end());

				}
				else if (flag[x] > flag[y]) {
					short xx = flag[x];
					//for (auto itr = num[flag[x]].begin(); itr != num[flag[x]].end(); ++itr) {
					for (auto itr = num[xx].begin(); itr != num[xx].end(); ++itr) {
						num[flag[y]].insert(*itr);
						flag[*itr] = flag[y];
					}
					
				//	num.erase(num.begin() + xx);
					num[xx].erase(num[xx].begin(), num[xx].end());
				
				}

			}
			else if (flag[x] != -1) {
				num[flag[x]].insert(y);
				flag[y] = flag[x];
			}
			else if (flag[y] != -1) {
				num[flag[y]].insert(x);
				flag[x] = flag[y];
			}
		}
		else if (com == 1) {
			if (flag[x] == flag[y] && flag[x] != -1) {
				//cout << 1 << endl;
				ans.push_back(1);
			}
			else {
				//cout << 0 << endl;
				ans.push_back(0);
			}
		}
	}


	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}




	getchar();
	getchar();
	return 0;
}
