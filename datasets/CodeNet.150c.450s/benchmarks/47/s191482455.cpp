#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(int argc, char **argv){
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if (w >= x + r && h >= y + r && x - r >= 0 && y - r >= 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}