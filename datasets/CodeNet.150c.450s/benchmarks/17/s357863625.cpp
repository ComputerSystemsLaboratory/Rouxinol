#include <cstdio>
#include <algorithm>
using namespace std;

bool big_order(int a, int b){return (a>b);}

int main(int argc, char *argv[]) {
	int array[5];
	
	fscanf(stdin, "%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	sort(array, array+sizeof(array)/sizeof(int), big_order);
	printf("%d", array[0]);
	for (int i = 1; i < 5; i++) {
		printf(" %d", array[i]);
	}
	fflush(stdout);
	printf("\n");
	return 0;
}