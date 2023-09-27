#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
void getValues(string& s, int& a, int & b)
{
	string::size_type p = s.find(',');
	string sa = s.substr(0, p);
	string sb = s.substr(p + 1);
	a = atoi(sa.c_str());
	b = atoi(sb.c_str());
}

int main()
{
	int w, n, a, b;
	cin >> w >> n;
	int W[31] = {};
	FOR(i, 1, w + 1) W[i] = i;
	string line;
	while (n--){
		cin >> line;
		getValues(line, a, b);
		swap(W[a], W[b]);
	}
	FOR(i, 1, w + 1) cout << W[i] << "\n";
	return 0;
}