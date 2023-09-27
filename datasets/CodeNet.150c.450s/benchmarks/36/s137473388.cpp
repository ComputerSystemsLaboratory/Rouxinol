#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int d,sum;
	while(scanf("%d",&d)!=EOF){
		sum = 0;
		for(int i=d;i<=600;i+=d){
			sum += d*(i-d)*(i-d);
		}
		printf("%d\n",sum);
	}

    return 0;
}
