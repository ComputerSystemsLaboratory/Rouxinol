#include <stdio.h>

#define N 100001

int A[N];
char X[N];
int Number[N];
char C[N];

void quic_sort(int , int );
void Swap1(int* , int* );
void Swap2(char* , char* );
int Check(int );
int Partition(int , int );

int main()
{
  int n, i;
  scanf("%d", &n);
  for(i=0 ; i<n ; i++)
  {
    getchar();
    scanf("%c%d", &X[i], &A[i]);
  }
  for(i=0 ; i<n ; i++)
  {
    Number[i] = A[i];
    C[i] = X[i];
  }
  quic_sort(0, n-1);
  printf("%s\n", (Check(n) ? "Stable" : "Not stable"));
  for(i=0 ; i<n ; i++) printf("%c %d\n", X[i], A[i]);
  return 0;
}

void Swap1(int* a, int* b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void Swap2(char* a, char* b)
{
  char tmp = *a;
  *a = *b;
  *b = tmp;
}

int Partition(int p, int r)
{
  int x = A[r];
  int i = p - 1, j;
  for(j=p ; j<r ; j++)
  {
    if(A[j] <= x)
    {
      i++;
      Swap1(&A[i], &A[j]);
      Swap2(&X[i], &X[j]);
    }
  }
  Swap1(&A[i+1], &A[r]);
  Swap2(&X[i+1], &X[r]);
  return i+1;
}

void quic_sort(int p, int r)
{
  if(p < r)
  {
    int q = Partition(p, r);
    quic_sort(p, q-1);
    quic_sort(q+1, r);
  }
}

int Check(int n)
{
  int i, j;
  for(i=1 ; i<n ; i++)
  {
    if(A[i-1] == A[i])
    {
      int a, b;
      for(j=0 ; j<n ; j++)
      {
        if(A[i-1] == Number[j] && X[i-1] == C[j]) a = j;
        if(A[i] == Number[j] && X[i] == C[j]) b = j;
      }
      if(a > b) return 0;
    }
  }
  return 1;
}

