#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,b;
	vector<int>a;
	while (1){
		int max_v = -1000000;
		a.clear();
		cin >> n;
		if (n == 0)break;
		a.push_back(0);
		for (int i = 0; i < n; i++){
			cin >> b;
			a.push_back(b);
		}
		for (int i = 1; i <= n; i++){
			a[i] = max(a[i - 1] + a[i], a[i]);
			if (a[i]>max_v){
				max_v = a[i];
			}
		}
		cout << max_v << endl;
	}
}