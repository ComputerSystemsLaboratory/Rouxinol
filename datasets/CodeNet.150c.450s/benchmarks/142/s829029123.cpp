#include <iostream>
#include <vector>

using namespace std;

vector<int> num;

int main(){
	int n, k, tmp;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> tmp, num.push_back(tmp);
	for (int i = k; i < n; i++){
		if (num[i] > num[i - k]) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
