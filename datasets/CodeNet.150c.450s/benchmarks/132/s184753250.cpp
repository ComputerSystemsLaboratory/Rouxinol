#include <cstdio>
#include <iostream>
using namespace std;

struct Candidate{
	int num;
};

int main(void) {
	for (;;) {
		int n, p;
		cin >> n >> p;
		if (n == 0 && p == 0)
			break;
		Candidate candidate[50];
		for (int i = 0; i < 50; i++) {
			candidate[i].num = 0;
		}
		
		int winner;
		int t = p;
		for (int i = 0; i <= 1000000; i=(i+1)%n) {
			if (p != 0) {
				candidate[i].num++;
				p--;
			}
			else if (p == 0) {
				p+=candidate[i].num;
				candidate[i].num = 0;
			}
			if (candidate[i].num == t) {
				winner = i;
				break;
			}
		}
		printf("%d\n", winner);
	}
	return 0;
}