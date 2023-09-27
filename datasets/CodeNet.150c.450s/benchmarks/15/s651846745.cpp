#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, i, c = 0;
	cin >> n;
	vector<long> vN(n, 0);
	for(i = 0; i < n; ++i) cin >> vN[i];
	cin >> m;
	vector<long> vM(m, 0);
	for(i = 0; i < m; ++i) cin >> vM[i];
	std::sort(vN.begin(), vN.end());
	for(i = 0; i < m; ++i){
		if(std::binary_search(vN.begin(), vN.end(), vM[i]))
			++c;
	}

	cout << c << "\n";

	return 0;
}