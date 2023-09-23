#include <iostream>
#include <cmath>

#define N_MAX 1000000

using namespace std;

int main(void)
{
	int n = 0;
	bool isNotPrime[N_MAX] = { false };
	
	isNotPrime[0] = true;
	int rootN = sqrt(N_MAX);
	for(int i = 2; i <= rootN; i++){
		for(int j = 2 * i; j < N_MAX; j += i){
			isNotPrime[j - 1] = true;
		}
	}
	
	while(cin >> n){
		//素数の数をカウント
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(!isNotPrime[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	
	return 0;
}