#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int h, tmp;
	while (cin >> h, h) {
		vector<vector<int>>v(h, vector<int>());
		rep(i, h) {
			rep(j, 5) {
				cin >> tmp;
				v[i].push_back(tmp);
			}
		}
		bool flag = true;
		int ns = 0;
		while (flag) {
			flag = false;
			//?¶????
			rep(i, h) {
				rep(j, 5) {
					tmp = 0;
					while (true) {
						if (v[i][j] == 0 || (j + tmp + 1) == 5)break;
						if (v[i][j] == v[i][j + tmp + 1])tmp++;
						else break;
					}
					if (tmp >= 2) {
						ns += v[i][j] * (tmp + 1);
						rep(k, tmp + 1)v[i][j + k] = 0;
						flag = true;
					}
				}
			}
			//?????¨???
			bool cont = true;
			while (cont) {
				cont = false;
				for (int i = h - 1; i > 0; i--) {
					rep(j, 5) {
						if (v[i][j] == 0 && v[i - 1][j]) {
							v[i][j] = v[i - 1][j];
							v[i - 1][j] = 0;
							cont = true;
						}
					}
				}
			}
		}
		cout << ns << endl;
	}		
	return 0;
}