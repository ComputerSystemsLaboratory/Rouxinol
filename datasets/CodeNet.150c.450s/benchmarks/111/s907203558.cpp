#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
static const int MAX_N = 100;

int n;
int a[MAX_N];
ll memo[MAX_N][21];

int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	fill(memo[0], memo[n], 0);
	memo[0][a[0]]++;
	for(int i = 1; i < n - 1; i++){
		for(int j = 0; j <= 20; j++){
			if(j - a[i] >= 0) memo[i][j] += memo[i - 1][j - a[i]];
			if(j + a[i] <= 20) memo[i][j] += memo[i - 1][j + a[i]];
		}
	}
	cout << memo[n - 2][a[n - 1]] << endl;
	return 0;
}

