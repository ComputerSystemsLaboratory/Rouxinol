#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int *a, const int *b)
{
    if (*a > *b)
        return (-1);
    else if (*a < *b)
        return (1);
    return (0);
}

int main(void){
    int i;
	int x[10];
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	}
	qsort(x,10,sizeof(int),  (int(*)(const void*, const void*))int_cmp);

	printf("%d\n%d\n%d\n",x[0],x[1],x[2]);

}