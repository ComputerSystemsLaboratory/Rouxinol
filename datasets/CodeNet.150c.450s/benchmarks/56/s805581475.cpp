#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	long long n, Min = 1000001, Max = -1000001, a, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		Min = min(Min, a);
		Max = max(Max, a);
		sum += a;
	}
	cout << Min << " " << Max << " " << sum << endl;
	return 0;
}