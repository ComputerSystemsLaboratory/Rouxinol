#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 100000;
int arr[MAX + 1];
vector<int> L;
int n;
int lis()
{
	L.push_back(arr[0]);
	for (int i = 1; i < n; i++)
		if (arr[i] > L.back())
			L.push_back(arr[i]);
		else
			*lower_bound(L.begin(), L.end(), arr[i]) = arr[i];
	return L.size();
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << lis() << endl;
}
