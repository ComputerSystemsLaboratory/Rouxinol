#include <iostream>
#include <fstream>
#include <cstdio>
#include <math.h>
#include <limits>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

bool exist(int s, int n, int set[]) {
	int count;
	bool output;
	count=0;
	output=false;
	while (count!=n) {
		if (set[count]==s) {
			output=true;
		}
		count++;
	}
	return output;
}

int main() {
	int s;
	int n;
	int current;
	int count;
	int min;
	scanf("%d", &s);
	scanf("%d", &n);
	int* coin=new int[s];
	int* set=new int[n];
	count=0;
	while (count!=s) {
		coin[count]=0;
		count++;
	}
	count=0;
	while (count!=n) {
		scanf("%d", &set[count]);
		count++;
	}
	current=0;
	while (current!=s) {
		current++;
		if (exist(current, n, set)==true) {
			//printf("coin[%d]: 1\n", current);
			coin[current-1]=1;
		}
		else {
			min=0;
			count=0;
			while (count!=n) {
				if (current-set[count]>0) {
					if (coin[current-set[count]-1]<min || min==0) {
						min=coin[current-set[count]-1];
					}
				}
				count++;
			}
			//printf("coin[%d]: %d\n", current, min+1);
			coin[current-1]=min+1;
		}
	}
	printf("%d\n", coin[current-1]);
	return 0;
}