#include <bits/stdc++.h>
using namespace std;

#define out cout 
#define in cin
#define el endl

#define rep(i, N) for (int i = 0; i < N; i++)
#define mito(N) cout << N << endl

bool f[1000001] = {false};

int main()
{
	for (int i = 2; i * i < 1000001; i++){
		for (int j = i * i; j < 1000001; j += i){
			f[j] = true;
		}
	}

	int n;
	while (in >> n){
		int c = 0;
		for (int i = 2; i <= n; i++){
			if (!f[i])c++;
		}
		mito(c);
	}

	return (0);
}