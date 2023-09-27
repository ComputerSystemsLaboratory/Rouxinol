#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
const long long int INF = 10000000;
int main()
{
	long long int n, x, max = -INF, min = INF, sum = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
		if (max < x)max = x;
		if (min > x)min = x;
		sum += x;
	}
	cout << min << " " << max << " " << sum << endl;
	//cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << " " << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}