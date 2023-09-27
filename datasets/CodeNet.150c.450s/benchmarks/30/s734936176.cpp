#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int cnt = 0;
	int a[128];

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++){
		int mini = i;
		for (int j = i; j < n; j++){
			if (a[mini] > a[j]) mini = j;
		}
		if (mini != i){
			swap(a[mini], a[i]);
			cnt++;
		}
	}

	
	for (int i = 0; i < n; i++){
		cout << a[i] << (i + 1 == n ? '\n' : ' ');
	}
	cout << cnt << endl;

	return 0;
}