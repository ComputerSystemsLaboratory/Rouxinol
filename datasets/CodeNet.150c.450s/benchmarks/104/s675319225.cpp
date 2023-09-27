#include <cstdio>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
	using namespace std;
	
	int vertNum, horiNum;
	fscanf(stdin, "%d", &vertNum);
	fscanf(stdin, "%d", &horiNum);
	
	vector<int> list(vertNum);
	for (int i = 0; i < vertNum; i++) {
		list[i] = i+1;
	}
	
	int tmp1, tmp2;
	for (int i = 0; i < horiNum; i++) {
		fscanf(stdin, "%d,%d", &tmp1, &tmp2);
		swap(list[tmp1-1], list[tmp2-1]);
	}
	
	for (int i = 0; i < vertNum; i++) {
		printf("%d\n", list[i]);
	}
	return 0;
}