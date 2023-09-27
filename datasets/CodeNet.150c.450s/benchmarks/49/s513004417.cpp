#include<stdio.h>

void QSort(int x[ ], int left, int right);
void Swap(int x[ ], int i, int j);

void QSort(int x[ ], int left, int right)
{
    int i, j;
    int pivot;

    i = left;                   
    j = right;                  

    pivot = x[(left + right) / 2];
    while (1) {                   

        while (x[i] < pivot)      
            i++;                  

        while (pivot < x[j])      
            j--;                  
        if (i >= j)               
            break;                

        Swap(x, i, j);            
        i++;                      
        j--;
    }

    if (left < i - 1)              
        QSort(x, left, i - 1);     
    if (j + 1 <  right)            
				QSort(x, j + 1, right);    
		}

void Swap(int x[ ], int i, int j)
{
    int temp;

    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
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

		QSort(p,0,n-1);	
	
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