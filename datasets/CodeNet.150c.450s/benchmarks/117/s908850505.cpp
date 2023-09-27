#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &s, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	int i, j, k;
	vector<int> l(n1 + 1);
	vector<int> r(n2 + 1);

	for (i = 0; i < n1; i++)
	{
		l[i] = s[left + i];
	}
	for (i = 0; i < n2; i++)
	{
		r[i] = s[mid + i];
	}
	l[n1] = 9999999999;
	r[n2] = 9999999999;

	i = 0;
	j = 0;
	for (k = left; k<right; k++) {
		if (l[i] <= r[j]) {
			s[k] = l[i];
			i++;
			
		}
		else {
			s[k] = r[j];
			j++;
		}
	}
	return right - left;
}

int merge_sort(vector<int> &s, int left, int right) {
	int mid, count = 0;
	if (left + 1<right) {
		mid = (left + right) / 2;
		count += merge_sort(s, left, mid);
		count += merge_sort(s, mid, right);
		count += merge(s, left, mid, right);

	}
	return count;
}

int main() {
	int i, x, n;
	vector<int> s(500000);
	cin >> n;
	for (i = 0; i<n; i++)cin >> s[i];

	x = merge_sort(s, 0, n);

	for (i = 0; i<n; i++) {
		if (i)cout << " ";
		cout << s[i];
	}
	cout << '\n';
	cout << x << '\n';
	return 0;
}
