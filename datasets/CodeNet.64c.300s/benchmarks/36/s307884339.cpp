#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int list[3];
int main(){
	cin >> list[0] >> list[1] >> list[2];

	sort(list, list + 3);

	printf("%d %d %d\n", list[0], list[1], list[2]);

	return 0;
}