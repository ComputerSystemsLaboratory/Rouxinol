#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;


int main()
{
	int n;
	long long a, Max = -10000000001, Min = 10000000001;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		Max = max(Max, a - Min);
		Min = min(Min, a);
	}
	cout << Max << endl;
	
	return 0;
}