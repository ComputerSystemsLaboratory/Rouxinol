#include<stdio.h>

int main(){

	int n, i, j;
	int r, rmax,rmin;

	scanf("%d",&n);

	int R[200000];

	for(i = 0; i < n; i++){
		scanf("%d",&R[i]);
	}

	
	rmax = -1000000000;
	rmin = R[0];

	for(i = 1; i < n; i++){
		int x;
		x = R[i] - rmin;
		if(x > rmax) rmax = x;

		if(rmin > R[i]) rmin = R[i];
	}

	printf("%d\n",rmax);


	return 0;
}