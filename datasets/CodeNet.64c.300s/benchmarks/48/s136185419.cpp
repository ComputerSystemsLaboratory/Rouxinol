#include<iostream>
using namespace std;
#define MAX 1000000
#define SQRTMAX 1000
void seive_prime(bool seive[])
{
	for(int i=2;i<=SQRTMAX;i++) {
		if(seive[i] == false) {
			for(int j=i*2;j<=MAX;j+=i) {
				seive[j]=true;
			}
		}
	}
}
int main() {
	int n;
	bool sieve[MAX+1] = {false};
	// エラトステネスの篩
	seive_prime(sieve);
	
	while(cin >> n) {
		int cnt = 0;
		for(int i=2;i<=n;i++) {
			if(sieve[i] == false)
				cnt++;
		}
		cout << cnt << endl;
	}
}