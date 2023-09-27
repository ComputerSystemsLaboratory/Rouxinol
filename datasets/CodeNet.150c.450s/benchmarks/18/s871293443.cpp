#include <stdio.h>
#include <math.h>

int main() {
	int week;
	double husai = 100;
	double rishi;
	
	scanf("%d",&week);
	
	for(int i=0;i<week;i++){
		rishi = ceil((husai * 5)/100);
		husai = husai + rishi;
	}
	
	husai = husai * 1000;
	printf("%.f\n",husai);
	
	return 0;
}
