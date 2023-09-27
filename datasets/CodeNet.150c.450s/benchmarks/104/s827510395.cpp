#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int w, n = 1;
	cin >> w;
	vector<int> vec(w);
	for (auto& x : vec) x = n++;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a, b;
		char c;
		cin >> a >> c >> b;
		int tmp = vec[a - 1];
		vec[a - 1] = vec[b - 1];
		vec[b - 1] = tmp;
	}
	for (auto x : vec) cout << x << "\n";
	cout.flush();
}