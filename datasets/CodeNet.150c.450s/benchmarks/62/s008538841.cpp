#include <cstdio>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	int a[3] = {x ,y ,z}, buff = 0;

	while (1){
		for(int i = 0; i < 3; i++){
			for(int j = i; j < 3; j++){
				if(a[i] > a[j]) {
					buff = a[j];
					a[j] = a[i];
					a[i] = buff;
				}
			}
		}
		if (a[0] <= a[1] && a[1] <= a[2]) break;
	}

	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}