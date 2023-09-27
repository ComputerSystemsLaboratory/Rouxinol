#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++)
		cout << v[i] << " ";
	cout << v[v.size() - 1] << endl;
    return 0;
}