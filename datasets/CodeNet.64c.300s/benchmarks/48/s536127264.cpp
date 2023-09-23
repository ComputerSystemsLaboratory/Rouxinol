#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

bool prime[(int)1e7];
int integral[(int)1e7];

int main(){
	fill(prime + 2, prime + (int)1e7, true);
	
	for(int i = 2; i < (int)1e7; ++i){
		if(prime[i]){
			for(int j = i * 2; j < (int)1e7; j += i){
				prime[j] = false;
			}
		}
	}

	for(int i = 1; i < (int)1e7; ++i){
		integral[i] = integral[i - 1] + prime[i];
	}

	int n;
	while(scanf("%d", &n) != EOF){
		printf("%d\n", integral[n]);
	}
	return 0;
}