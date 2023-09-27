#include <iostream>
#include <vector>
/*
#include <ctime>
#define CLOCK_T(str) clock_t ## #str
#define SET_CLOCK(str) CLOCK_T(str) ## =cloxk();
*/
using namespace std;

int main() {
//	SET_CLOCK(Start);
	cin.tie(0);

	int x;
	static vector<int> V;

	while(cin>>x, x) {
		V.push_back(x);
	}
	ios::sync_with_stdio(false);
	for(int i = 0; i < V.size(); ++i) {
		cout << "Case " << (i+1) << ": " << V[i] << "" << '\n';
	}
	
//	SET_CLOCK(End);
//	cout << "????????????: " << (double)(End-Start) << endl;
	return 0;
}