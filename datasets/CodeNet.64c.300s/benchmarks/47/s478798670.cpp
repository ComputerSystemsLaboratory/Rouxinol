#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[110] = {0};
	int n;
	int M = 0, ct = 0;
	
	while (cin >> n){
		num[n]++;
		ct++;
		M = max(M, num[n]);
	}
	
	for (int i = 0; i < ct; i++){
		if (M == num[i]){
			cout << i << "\n";
		}
	}
	return (0);
}