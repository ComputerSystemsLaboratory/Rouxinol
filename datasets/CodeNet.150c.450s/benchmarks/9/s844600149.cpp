#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string s,ans;
	int n,h,cnt,pos;

	while (1){
		cin >> s;
		if (s == "-")break;

		cin >> n;
		cnt = 0;
		pos = 0;

		for (int i = 0; i < n; i++){
			cin >> h;
			cnt += h;
		}

		pos = cnt % s.length();
		s = s + s;
		ans = s.substr(pos, s.length() / 2);
		cout << ans << endl;

	}


	return 0;
}