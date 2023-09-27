#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);
	map<int, int> input;
	long sum = 0;
	for (int i = 0; i < N; i++) {
		int A;
		scanf("%d", &A);
		input[A]++;
		sum += A;
	}
	int Q;
	scanf("%d", &Q);
	for (int i = 0; i < Q; i++) {
		int B, C;
		scanf("%d %d", &B, &C);
		// cout << input[B] << "\n";
		sum += (C - B) * input[B];
		input[C] += input[B];
		input[B] = 0;
		printf("%ld\n", sum);
	}
	return 0;
}
