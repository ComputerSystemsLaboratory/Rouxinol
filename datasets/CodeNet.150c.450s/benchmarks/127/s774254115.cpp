// AOJ 1142

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int m;
	cin >> m;
	while (m--){
		string str;
		map <string, int> mydata;
		cin >> str;
		for (int i = 1; i < (int)str.length(); i++){
			string first = str.substr(0, i);
			string second = str.substr(i, (int)str.length() - i);
			string frev = first; reverse(frev.begin(), frev.end());
			string srev = second; reverse(srev.begin(), srev.end());
			// cout << first << " " << second << endl;

			// そのまま＋そのまま
			mydata[first + second]++;
			// はんてん＋そのまま
			mydata[frev + second]++;
			// そのまま＋はんてん
			mydata[first + srev]++;
			// はんてん＋はんてん
			mydata[frev + srev]++;

			// いれかえする
			// そのまま＋そのまま
			mydata[second + first]++;
			// そのまま＋はんてん
			mydata[second + frev]++;
			// はんてん＋そのまま
			mydata[srev + first]++;
			// はんてん＋はんてん
			mydata[srev + frev]++;
		}

		cout << mydata.size() << endl;
	}

	return 0;
}