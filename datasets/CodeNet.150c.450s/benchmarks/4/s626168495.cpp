#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int m, f, r;
	int score;

	while(1){
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;

		if(m == -1 || f == -1){
			printf("F\n");
			continue;
		}

		score = m + f;
		if(score < 30){
			printf("F\n");
		}else if(score < 50){
			if(r >= 50) printf("C\n");
			else printf("D\n");
		}else if(score < 65){
			printf("C\n");
		}else if(score < 80){
			printf("B\n");
		}else{
			printf("A\n");
		}
	}

	return 0;

}