#define scanf_s scanf
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

#define MAX 450
//#define MAX_ 1000

int main(void)
{
	int H, xk;
	long long int Heaps[MAX + 1];
	scanf_s("%d", &H);
	for (int i = 1; i <= H; ++i) {
		scanf_s("%d", &xk);
		Heaps[i] = xk;
	}
	for (int i = 1; i <= H; ++i) {
		printf("node %d: key = %lld, ", i, Heaps[i]);
		if (i / 2 >= 1) printf("parent key = %lld, ", Heaps[i / 2]);
		if (i * 2 <= H) printf("left key = %lld, ", Heaps[i * 2]);
		if (i * 2 + 1 <= H) printf("right key = %lld, ", Heaps[i * 2 + 1]);
		printf("\n");
	}
}