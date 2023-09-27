#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	int i,in;
	i = 0;
	while (true){
		i++;
		cin >> in;
		if (in == 0)break;
		printf("Case %d: %d\n", i, in);
	}

	return 0;
}