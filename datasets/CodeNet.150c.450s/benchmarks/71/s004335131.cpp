#include <cstdio>

int main(int argc, char *argv[]) {
	using namespace std;
	
	int rcv;
	
	while (EOF != fscanf(stdin, "%d", &rcv)) {
		int cnt = 0;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						if (a+b+c+d == rcv)
							cnt++;
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}