#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<cmath>
#include<stack>
//#include<stdlib.h>
using namespace std;
int main() {
	vector<int>out(0);
	int n, max, min, on = -1, l=0;
	vector<int>p(200,0);
	while (true)
	{
		cin >> n >> min >> max;
		if (n == 0) { break; }
		out.push_back(0);
		on++;
		for (int a = 0; a < n; a++) { cin >> p[a]; }
		for (int a = min-1 ; a < max; a++) {
			if (l <= p[a] - p[a + 1]) { l = p[a] - p[a + 1]; out[on] = a+1; }
		}
		for (int a = 0; a < n; a++) {  p[a]=0; }
		n = 0; min = 0; max = 0; l = 0;
	}
	for (int a = 0; a < on+1; a++) { cout << out[a]<<endl; }
	return 0;
}
