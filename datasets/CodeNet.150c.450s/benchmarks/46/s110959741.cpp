#include<iostream>
using namespace std;

int main()
{
	int n = 0, x = 0, a[1000] = { 0 }, count = 0, count2;

	while (1){
		cin >> n >> x;
		if (n == 0 && x == 0) break;
		a[count] = n, a[++count] = x;
		count++;
	}

	int i = 0;
	while (i < count){
		count2 = 0;
		for (int j = 1; j < a[i] - 1; j++){
			for (int k = j + 1; k < a[i]; k++){
				for (int l = k + 1; l <= a[i]; l++){
					if (j + k + l == a[i + 1]) count2++;
				}
			}
		}
		cout << count2 << endl;
		i += 2;
	}

	return 0;
}