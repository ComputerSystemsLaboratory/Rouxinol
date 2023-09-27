#include <cstdio>
#include <stack>

int main(int argc, char *argv[]) {
	using namespace std;
	
	int rcv;
	stack<int> trains;
	while (EOF != fscanf(stdin, "%d", &rcv)) {
		if (rcv != 0) {
			trains.push(rcv);
		}
		else {
			printf("%d\n", trains.top());
			trains.pop();
		}
	}
	return 0;
}