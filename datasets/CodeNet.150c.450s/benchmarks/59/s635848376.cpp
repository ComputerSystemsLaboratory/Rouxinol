#include<stdio.h>

void trace(int A[], int N)
{
  int i;
  for(i=0; i<N; i++)
  {
    if(i>0)
      printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}

int main(void)
{
  int i,j,v,n;
  int array[100];
  scanf("%d\n", &n);

  for(i=0; i<n; i++)
  {
    scanf("%d", &array[i]);
  }
  for(i=0; i<n; i++)
  {
    printf("%d", array[i]);
    if(i!=n-1)
      printf(" ");
    else
      printf("\n");
  }

  for(i=1; i<n; i++)
  {
    v = array[i];
    j = i-1;
    while (j>=0 && array[j] > v)
    {   
      array[j+1] = array[j];
      j--;
    }   
    array[j+1] = v;
    trace(array, n); 
  }
}