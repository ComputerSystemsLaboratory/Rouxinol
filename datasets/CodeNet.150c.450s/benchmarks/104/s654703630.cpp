#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>

using namespace std;

typedef long long int lli;

int main() {
	int w, n;
	cin >> w >> n;
	vector<int> ar(w);
	vector<vector<int> > hor(n,vector<int>(2));
	for (int i = 0; i < w; i++) ar[i] += i+1;
	for (int j = 0; j < n;j++) {
		(cin >> hor[j][0]).ignore(1) >> hor[j][1];
		swap(ar[hor[j][0]-1], ar[hor[j][1]-1]);
	}
	for (int i = 0; i < w; i++) cout << ar[i] << endl;
	return 0;
}