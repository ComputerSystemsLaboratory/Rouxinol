#include <iostream>
using namespace std;

#define Max 1000000

int prime [10000000];

int main()
{
	int n, out;

	for (int i = 2; i * i < Max; i++){
		if (prime[i] == 0){
			for (int j = i; j < Max; j += i){
				if (!(j == i)) prime[j] = 1;
			}
		}
	}

	while (cin >> n){
		out = 0;
		for (int i = 0; i <= n; i++){
			if (prime[i] == 0) out++;
		}
		cout << out - 2 << endl;
	}
	return(0);
}