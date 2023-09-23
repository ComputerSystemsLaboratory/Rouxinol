#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_N = 101;


int numnum[MAX_N];
int N, R;

long memo[101][21];

long first_grader(int p, int r){
	if (r < 0 || 20 < r) return 0;
	if (p == N) return r == R;
	if (memo[p][r] != -1) return memo[p][r];
	long res = 0;
	if (p == 0) res = first_grader(p + 1, numnum[p]);
	else res += first_grader(p + 1, r + numnum[p]) + first_grader(p + 1, r - numnum[p]);
	return memo[p][r] = res;
}

int main()
{
	memset(memo, -1, sizeof(memo));

	scanf("%d", &N);
	N--;
	for (int i = 0; i < N; i++){
		scanf("%d", &numnum[i]);
	}
	scanf("%d", &R);
	cout << first_grader(0, 0) << endl;
}