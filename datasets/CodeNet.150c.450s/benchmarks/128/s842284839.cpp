#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	char rcv[21];
	char out[21];
	fscanf(stdin, "%s\n", rcv);
	int cnt = 0;
	for (int i = 0; i < 21; i++) {
		if (rcv[i] == '\0') {
			for (int j = i-1; j !=-1; j--) {
				out[cnt] = rcv[j];
				cnt++;
			}
			out[cnt] = '\0';
			break;
		}
	}
	printf("%s\n", out);
	
	return 0;
}