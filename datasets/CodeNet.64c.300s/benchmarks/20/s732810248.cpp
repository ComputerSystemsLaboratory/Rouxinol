#include <cstdio>

int main(int argc, char *argv[]) {
	using namespace std;
	
	int rcv;
	
	while (EOF != fscanf(stdin, "%d", &rcv)) {
		int sum = 0;
		for (int i = rcv; i < 600; i+=rcv) {
			sum += i * i * rcv;
		}
		printf("%d\n", sum);
	}
	return 0;
}