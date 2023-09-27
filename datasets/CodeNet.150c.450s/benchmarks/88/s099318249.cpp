#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string.h>
#define _USE_MATH_DEFINES
#define LL long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
using namespace std;

int main() {
	int h, w, ans, base, ansh, answ;
	for (;;) {
		cin >> h >> w;
		ansh = answ = 0;
		if (h == 0 && w == 0) break;
		base = h*h + w*w;
		ans = 100000000;
		for (int i = 1; i < 151; i++) {
			for (int j = 1; j < 151; j++) {
				if (base < i*i + j*j&&i*i + j*j < ans&&i < j) {
					ans = i*i + j*j;
					ansh = i;
					answ = j;
				}
			}
		}
		for (int i = 1; i < 151; i++) {
			for (int j = 1; j < 151; j++) {
				if ((base < i*i + j*j||(base==i*i+j*j&&h<i))&&(i*i + j*j < ans)&&i < j) {
					ans = i*i + j*j;
					ansh = i;
					answ = j;
				}
			}
		}
		printf("%d %d\n", ansh, answ);
	}
	return 0;
}