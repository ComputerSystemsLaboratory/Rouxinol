#include "stdio.h"

int main()
{
	int n, m, l;

	while(scanf("%d", &n) != EOF){
		m = n;
		l = 0;

		for (int a = 0; a < 10; a++){
			if (m < a) break;
			else m -= a;
			for (int b = 0; b < 10; b++){
				if (m < b) break;
				else m -= b;
				for (int c = 0; c < 10; c++){
					if (m < c) break;
					else m -= c;
					for (int d = 0; d < 10; d++){
						if (m < d) break;
						else if(m == d) l++;
					}
					m += c;
				}
				m += b;
			}
			m += a;
		}

		printf("%d\n", l);
	}

	return 0;
}