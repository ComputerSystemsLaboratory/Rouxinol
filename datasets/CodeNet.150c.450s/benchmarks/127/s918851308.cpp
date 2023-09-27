#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>

#define rep(i, j) for(int i = 0; i < j; i++)
// sprep
#define sprep(i, j) for(int i = 1; i <= j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	// code
	int m, cnt;
	while (cin>>m) {

		cnt = 0;
		string s;
		string sf, sb, sfr, sbr;

		rep(i, m) {
			vector<string> wzken;
			cin >> s;
			rep(j, s.size()) {
				sf = s.substr(0, j + 1);
				sb = s.substr(j + 1);
				sfr = sf;
				sbr = sb;
				reverse(all(sfr));
				reverse(all(sbr));

				wzken.push_back(sf + sb);
				wzken.push_back(sfr + sb);
				wzken.push_back(sf + sbr);
				wzken.push_back(sfr + sbr);
				wzken.push_back(sb + sf);
				wzken.push_back(sbr + sf);
				wzken.push_back(sb + sfr);
				wzken.push_back(sbr + sfr);
			}
			sort(all(wzken));
			wzken.erase(unique(all(wzken)), wzken.end());
			cout << wzken.size() << endl;
		}
	}

	return 0;
}