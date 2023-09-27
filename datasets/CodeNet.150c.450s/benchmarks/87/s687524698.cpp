#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> c[5];

int erase(int h) {
	int ct = 1,n = 0,old_n = 0,max_ct = 1,i2,n2;
	for(int i = 0;i < 5;i++) {
		old_n = n;
		if((int)c[i].size() > h) n = c[i][h];
		else n = 0;

		if(old_n == n) ct++;
		else ct = 1;

		if(ct > max_ct) {
			max_ct = ct;
			i2 = i;
			n2 = n;
		}
	}
	if(max_ct >= 3 && n2 != 0) {
		for(int i = i2 - max_ct + 1;i <= i2;i++) c[i][h] = 0;
		return max_ct * n2;
	}
	return 0;
}

int main() {

	int h;
	while(cin >> h && h != 0) {
		for(int i = 0;i < 5;i++) {
			c[i].resize(h,0);
		}
		for(int i = 0;i < h;i++) {
			cin >> c[0][h - i - 1] >> c[1][h - i - 1] >> c[2][h - i - 1] >> c[3][h - i - 1] >> c[4][h - i - 1];
		}

		int score = 0,old_score = -1;
		while(score != old_score) {
			old_score = score;
			for(int i = 0;i < h;i++) score += erase(i);
			for(int i = 0;i < 5;i++) c[i].erase(remove(c[i].begin(),c[i].end(),0),c[i].end());
		}

		cout << score << endl;
	}
	 
}