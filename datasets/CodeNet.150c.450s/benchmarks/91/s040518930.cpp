#include <iostream>

using namespace std;

#define M 10000000
bool prime[M];
int main()
{
	
	int ans, n;

	for (int i = 2; i * i < M; i++){
		if (prime[i] == false){
			for (int j = i; j < M; j += i){
				if (!(i == j)) {
					prime[j] = true;
				}
			}
		}
	}
	while (cin >> n){
	  ans = 0;
		for (int i = 2; i <= n; i++){
	 	 if (prime[i] == false) ans++;
	  }
		cout << ans << endl;
	}
	return (0);
}