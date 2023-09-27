#include <stdio.h>

int zeller(int y, int m, int d){
	if(m <= 2){
		y--;
		m += 12;
	}

	int J = (int)(y/100);
	int K = y - (int)(y/100)*100;

	return (d + (int)((m+1)*26/10) + K + (int)(K/4) + (int)(J/4) + 5 * J + 5) % 7;
}

int main(void){
	int y, m, d;
	y = 2004;
	char *wday[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday",
	};
	while(true){
		scanf("%d %d", &m, &d);
		if(m == 0){ break; }
		int w = zeller(y, m , d);
		puts(wday[w]);
	}
	return 0;
}