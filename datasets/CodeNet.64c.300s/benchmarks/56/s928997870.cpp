#include <iostream>

using namespace std;

#define mill 196471

void solve(int y, int m, int d)
{
	long long Y, M, D;
	long long ans;
	
	if(y % 3 == 1) Y = (y - 1) / 3 * (195 * 3 + 5);
	else if(y % 3 == 2) Y = (y - 2) / 3 * (195 * 3 + 5) + 195;
	else Y = (y - 3) / 3 * (195 * 3 + 5) + 390;
	//cout << Y << endl;
	
	if(y % 3 == 0){
		M = (m - 1) * 20;
	}
	else{
		if(m % 2 == 1) M = (m - 1) / 2 * 39;
		else M = (m - 2) / 2 * 39 + 20;
	}
	//cout << M << endl;
	
	D = d;
	//cout << D << endl;
	
	ans = Y + M + D;
	
	cout << mill - ans << endl;
}

int main()
{
	int n;
	int y, m ,d;
	cin >> n;
	while(n--){
		cin >> y >> m >> d;
		solve(y, m, d);
	}
	return 0;
}