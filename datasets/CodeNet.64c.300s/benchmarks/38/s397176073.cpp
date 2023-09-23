#include <stdio.h>

int main()
{
	int N, ball[10], B[10], C[10], b, c, k;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d %d %d %d %d %d %d %d %d %d", &ball[0], &ball[1], &ball[2], &ball[3], &ball[4], &ball[5], &ball[6], &ball[7], &ball[8], &ball[9]);

		b = 0;
		c = 0;
		k = 0;
		for (int j = 0; j < 10; j++){
			if(b < ball[j] && (ball[j] - b) <= (ball[j] - c)) b = ball[j];
			else if(c < ball[j]) c = ball[j];
			else {k = 1; break;}
		}

		if(k == 0) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}