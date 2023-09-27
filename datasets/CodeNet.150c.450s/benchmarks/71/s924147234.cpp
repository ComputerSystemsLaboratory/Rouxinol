#include <iostream>
#include <vector>
using namespace std;

bool binary_search(vector<int> a, int x){
	int left = 0, right = a.size() - 1;

	while (left <= right){
		int mid = (left + right) / 2;
		if (a[mid] == x) return true;
		else if (a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}

int main()
{
	vector<int> vec(19);
	int cnt = 0;
	for (auto& x : vec) x = cnt++;
	int n;
	cnt = 0;
	while (cin >> n){
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				if (binary_search(vec, n - i - j)){
					if (n - i - j < 10) cnt += n - i - j + 1;
					else cnt += 19 - n + i + j;
				}
			}
		}
		cout << cnt << "\n";
		cnt = 0;
	}
	cout.flush();
}