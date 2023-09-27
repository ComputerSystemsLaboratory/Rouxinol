#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin >> n, n > 0){
		int s, sum = 0, maxi, mini;
		cin >> s;
		sum += s;
		maxi = s;
		mini = s;
		for(int i = 1; i < n; i++){
			cin >> s;
			sum += s;
			maxi = max(maxi, s);
			mini = min(mini, s);
		}
		cout << (sum-maxi-mini)/(n-2) << endl;
	}
	return 0;
}
