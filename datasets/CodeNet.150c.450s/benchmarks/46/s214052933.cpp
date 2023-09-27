#include <iostream>
using namespace std;

int main(void){
	int n,x, count = 0;

	while (true){
		cin >> n >> x;

		if (n == 0 && x == 0) break;

		count = 0;
		for (int i = 1; i < n-1; i++){
			for (int j = i + 1; j < n; j++){
				for (int k = j + 1; k < n+1; k++){
					if (i + j + k == x)
						count++;
				}
			}
		}

		cout << count << "\n";
	}

	return 0;
}