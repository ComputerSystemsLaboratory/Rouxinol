#include <cstdio>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// backslash: \
// \\\\////
// \ = -1
// / = +1
// _ =  0
// height の累積和
// 横軸の位置に対する
// 陸地のheight
// 水深のdepth 
//

#define MAX_LEN 20000

int main() {
	string s;
	cin >> s;

	int max_width = s.length() + 1;
	// ground height
	vector<int> gh(max_width);
	// left max, right max
	vector<int> ghmaxl(max_width, -MAX_LEN);
	vector<int> ghmaxr(max_width, -MAX_LEN); 
	// water depth
	vector<int> wd(max_width,0);

	// base level = 0
	gh[0] = 0;
	ghmaxl[0] = gh[0];
	for (int i=1; i<max_width; ++i) {
		int iprev = i-1;
		int inc = 0;
		if (s[iprev] == '\\') {
			inc = -1;
		} else if (s[iprev] == '/') {
			inc = +1;
		} else if (s[iprev] == '_') {
			inc =  0;
		}
		gh[i] = gh[iprev] + inc;
		ghmaxl[i] = max(ghmaxl[iprev], gh[i]);
		//cout << "gh[" << i << "] = " << gh[i] << ", ghmaxl = " << ghmaxl[i] << endl;
	}
	ghmaxr[max_width-1] = gh[max_width-1];
	for (int i=max_width-2; i>=0; --i) {
		ghmaxr[i] = max(ghmaxr[i+1], gh[i]);
		//cout << "gh[" << i << "] = " << gh[i] << ", ghmaxr = " << ghmaxr[i] << endl;
	}
	// water depth and area
	vector<int> area;
	int current_area = 0;
	for (int i=1; i<max_width; ++i) {
		// water height
		wd[i] = max(min(ghmaxl[i], ghmaxr[i]) - gh[i], 0);
		// intで集計するため一旦単に和を取る
		current_area += (wd[i-1] + wd[i]);
		if (wd[i-1] > 0 && wd[i] == 0) {
			area.push_back(current_area/2);// 所定の面積にするため2で割る
			current_area = 0;
		}
//		cout << "gh[" << i << "] = " << gh[i] << ", ghmaxl = " << ghmaxl[i];
//		cout << ", ghmaxr = " << ghmaxr[i] << ", wd = " << wd[i];
//		cout << ", current_area = " << current_area << endl;
	}
	cout << accumulate(area.begin(), area.end(), 0) << endl;
	cout << area.size();
	for (int i=0; i<area.size(); ++i) {
		cout << " " << area[i];
	}
	cout << endl;
	return 0;
}

