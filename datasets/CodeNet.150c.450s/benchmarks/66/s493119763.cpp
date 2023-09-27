#include <cstdio>
#include <string>
#include <set>
using namespace std;

int M, N;
bool open = false;
char c[16];
set<string> U;

int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", c, 16);
		U.insert((string)c);
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%s", c, 16);

		if (U.find((string)c) != U.end()) {
			if (open) {
				printf("Closed by %s\n", c);
			}
			else {
				printf("Opened by %s\n", c);
			}
			open = !open;
		}
		else {
			printf("Unknown %s\n", c);
		}
	}

	return 0;
}