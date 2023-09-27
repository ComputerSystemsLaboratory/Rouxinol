#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

void solve()
{
	string line;
	cin >> line;

	vector<string> strs;
	for(unsigned int i = 1; i < line.length(); i++){
		string l = line.substr(0,i);
		string r = line.substr(i);
		string lr(l.rbegin(),l.rend());
		string rr(r.rbegin(),r.rend());

		strs.push_back(l+r);
		strs.push_back(l+rr);
		strs.push_back(lr+r);
		strs.push_back(lr+rr);
		strs.push_back(r+l);
		strs.push_back(r+lr);
		strs.push_back(rr+l);
		strs.push_back(rr+lr);
	}

	sort(strs.begin(),strs.end());
	vector<string>::iterator end_it = unique(strs.begin(),strs.end());
	int c = 0;
	for(vector<string>::iterator it = strs.begin(); it != end_it; ++it)
		c++;

	cout << c << endl;
}

int main()
{
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		solve();
	}
	return 0;
}