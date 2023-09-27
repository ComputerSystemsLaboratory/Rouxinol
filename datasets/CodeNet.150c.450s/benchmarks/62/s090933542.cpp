#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <functional>
#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main(){
	int B, A, C;
	string str;
	vector<int> vi;

	rep(i, 3){
		int tmp;
		cin >> tmp;
		vi.push_back(tmp);
	}
	sort(vi.begin(), vi.end());

		cout << vi[0] << " " << vi[1] << " " << vi[2];

		cout << endl;
	return 0;
}