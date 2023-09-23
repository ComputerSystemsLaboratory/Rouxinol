#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	static int N;
	cin >> N;
	int* a = new int[N];

	for(int i = 0; i < N; i++) cin >> a[i];
	for(int i = 0; i < N; i++){
		if(i != N - 1) printf("%d ",a[N-i-1]);
		else printf("%d",a[N-i-1]);
	}
	printf("\n");
	return 0;
}