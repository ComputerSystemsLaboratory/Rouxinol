#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	long long N;
	long long d[101] = {};

	long long ln;

	cin >> N;
	N--;

	for(int i = 0; i < N; i++)
		cin >> d[i];
	cin >> ln;



	long long dp[2][21] = {{},{}};
	long long *acc = dp[0], *next_acc = dp[1];

	acc[d[0]] = 1ll;
	
	for(int i = 1; i < N; i++){
		for(int j = 0; j <= 20; j++){
			long long add = j + d[i];
			long long minu= j - d[i];
			
			if(add <= 20){
				next_acc[add] += acc[j];

			}
			if(minu >= 0){
				next_acc[minu]+= acc[j];

			}
			acc[j] = 0;	

		}
 
		swap(acc, next_acc);

	}

//	cout << endl << endl;
//	for(int i = 1; i <= 20; i++)
//		cout << i << ':' << acc[i] << endl;
cout << acc[ln] << endl;

		
	return 0;
}