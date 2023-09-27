#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 150
int main(void)
{
	int n, now = 0;
	int list[MAX] = { 0 };
	while(scanf_s("%d", &n) != EOF){
		if (n != 0) { list[now] = n; ++now; }
		else { --now; 	printf("%d\n", list[now]);}
	}
}