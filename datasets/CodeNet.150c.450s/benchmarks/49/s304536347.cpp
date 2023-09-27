#include<stdio.h>

void sort(int p[],int n);

void sort(int p[],int n)
{
    int i,j,temp;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (p[j-1] > p[j]) {
                temp = p[j];
                p[j] = p[j-1];
                p[j-1] = temp;
            }
        }	
    }
}

int main(void)
{
	int i;
	int j;
	int k;
	int n;
	int d[20];
	int p[100];
	int sum;
	int ave;
	
	j=0;
	while(1){


		scanf("%d",&n);
		if(n==0) 
			break;
			
		for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		}

		sort(p,n);	
	
		sum = 0;
		for(i=1;i<n-1;i++){
			sum += p[i];
		}
			
			d[j] = sum / (n-2);
			j++;

	}
	
	for(k=0;k<j;k++)
		printf("%d\n",d[k]);

	return 0;
}