#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N[101] = {};
	vector<int> vM;
	vM.reserve(100);
	int c = 0, k;
	while(cin >> k){
		++N[k];
		if(N[k] > c){
			c = N[k];
			vM.clear();
			vM.push_back(k);
		} else if( N[k] == c)
			vM.push_back(k);
	}
	sort(vM.begin(), vM.end());
	for(int i = 0; i < vM.size(); ++i)
		cout << vM[i] << "\n";
	return 0;
}