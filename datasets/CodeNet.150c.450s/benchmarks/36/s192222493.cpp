#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 150
#define CONSTNUM 600
int main(void)
{
	int d, sum = 0;
	while(scanf_s("%d", &d) != EOF){
		for (int i = 1; i < CONSTNUM / d; ++i) {
			sum += ((d*i)*(d*i) * d);
		}
		printf("%d\n", sum);
		sum = 0;
	}
}