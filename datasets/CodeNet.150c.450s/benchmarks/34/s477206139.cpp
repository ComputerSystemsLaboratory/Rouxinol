#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, i;
	vector<int> stairs;

	while (cin>>n, n) {
		stairs.clear();
		stairs.resize(n+3);
		stairs[0] = 1;
		for (i = 0; i < n; i++) {
			stairs[i+1] += stairs[i];
			stairs[i+2] += stairs[i];
			stairs[i+3] += stairs[i];
		}
		cout<<((stairs[n]+9)/10+364)/365<<endl;
	}
	return 0;
}