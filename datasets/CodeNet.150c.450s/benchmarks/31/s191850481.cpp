#include <iostream>

using namespace std;

int main(void)
{
	int R[200000], n;
	int maxv, maxR;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> R[i];
	}
	
	maxR = R[n-1];
	maxv = R[n-1]-R[n-2];
	
	for(int i=2;i<n+1;i++){
		maxv = max(maxv, maxR - R[n-i]);
		maxR = max(maxR, R[n-i]);
	}
	
	cout << maxv << endl;
	return 0;
}