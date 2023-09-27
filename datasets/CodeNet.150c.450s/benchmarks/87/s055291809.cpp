#include <algorithm>
#include <iostream>
#include <list>
#include <math.h>
#include <string>
#include <vector>

#define REP(i, n) for (int i = 0; i < n; i++)
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;

#define mod 1000000007 // 1e9+7(prime number)
#define INF 1000000000 // 1e9

using namespace std;
typedef long long ll;

int main() {
	while (1) {
		int h, r, score, count, num;
		bool erased;
		vector<list<int> > mp(5);
		vector<list<int>::iterator> itrs(5);

		score = 0;
		count = 0;
		cin >> h;
		if (h==0) break;
		vector<vector<int>> input(h);
		REP(j, h) {
			REP(k, 5) {
				cin >> r;
				input[j].push_back(r);
			}
		}

		REP(k, 5) {
			REP(j, h) { mp[k].push_front(input[j][k]); }
		}

		while (1) {
			// 各行を見て点数を計算
			REP(i, 5) itrs[i] = mp[i].begin();
			REP(j, h) {
				num = -1;
				REP(k, 5) {
					/*debug(j);
					debug(k);
					debug(*itrs[k]);*/
					if (j < mp[k].size()) {
						if (*itrs[k] == num && num>0)
							count++;
						else {
							num = *itrs[k];
							count = 1;
						}
						if (count >= 3) {
							*itrs[k] = -1;
							if (count == 3) {
								score += 3 * num;
								itrs[k - 1]--;
								itrs[k - 2]--;
								*itrs[k - 1] = -1;
								*itrs[k - 2] = -1;
								itrs[k - 1]++;
								itrs[k - 2]++;
							} else {
								score += num;
							}
							/*debug(j);
							debug(num);
							debug(count);
							debug(score);*/
						}
						if (itrs[k] != mp[k].end()) itrs[k]++;
					}
				}
			}

			erased = false;
			REP(i, 5) itrs[i] = mp[i].begin();
			REP(j, h) {
				REP(k, 5) {
					//debug(j);
					//debug(k);
					if (itrs[k] != mp[k].end()) {
						if (*itrs[k] < 0) {
							erased = true;
							//debug(*itrs[k]);
							itrs[k] = mp[k].erase(itrs[k]);
							mp[k].push_back(0);
						} else {
							//debug(*itrs[k]);
							++itrs[k];
						}
					}
					//				if (*itrs[k] != NULL)debug(*itrs[k]);
				}
				//cout << "--------------------------" << endl;
			}
			//cout << score << endl;
			//cout << "--------------------------" << endl;
			if (!erased) break;
			REP(i, 5) if (mp[i].empty()) break;
		}

		cout << score << endl;
		/*if (score==90){
			debug(po);
			debug(score);
			cout << h << endl;
			REP(j,h){
				REP(k,5) printf("%d ", input[j][k]);
				cout << endl;
			}
		}
		po++;*/
		
	}
	return 0;
}

