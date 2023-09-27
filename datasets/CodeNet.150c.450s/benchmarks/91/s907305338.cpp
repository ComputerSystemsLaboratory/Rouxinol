// 2015/05/19 Tazoe

#include <iostream>
using namespace std;

int main()
{
	bool is_prime[1000000];		// 素数かどうかのテーブル

	is_prime[0] = is_prime[1] = false;
	for(int i=2; i<1000000; i++){
		is_prime[i] = true;
	}

	for(int i=2; i*i<1000000; i++){
		if(is_prime[i]){
			for(int j=i*i; j<1000000; j+=i){
				is_prime[j] = false;
			}
		}
	}

	int n_prime[1000000];		// 素数の個数のテーブル

	int cnt = 0;
	for(int i=0; i<1000000; i++){
		if(is_prime[i]){
			cnt++;
		}
		n_prime[i] = cnt;
	}

	while(true){
		int n;
		cin >> n;

		if(cin.eof())
			break;

		cout << n_prime[n] << endl;
	}

	return 0;
}