#include <stdio.h>

int n, S[500001];
int ans = 0;

void merge(int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  
  int L[n1+1], R[n2+1];
  
  int i, j, k;
  
  for(i=0; i<n1; i++)
    L[i] = S[left+i];
  
  for(i=0; i<n2; i++)
    R[i] = S[mid+i];
    
  L[n1] = 1000000001;
  R[n2] = 1000000001;
  
  i = 0;
  j = 0;
  
  for(k=left; k<right; k++){
    ans++;
    if(L[i] <= R[j])
      S[k] = L[i++];
    else
      S[k] = R[j++];
  }
}

void mergeSort(int left, int right)
{
  int mid;
  
  if(right -left <= 1)
    return;
    
  mid = (left+right)/2;
  mergeSort(left, mid);
  mergeSort(mid, right);
  
  merge(left, mid, right);
}


int main()
{
  
  int i, left, right;
  
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &S[i]);
    
  left = 0;
  right = n;
  
  mergeSort(left, right);
  
  for(i=0; i<n; i++){
    if(i>0)
      printf(" ");
    printf("%d", S[i]);
  }
  printf("\n");
  
  printf("%d\n", ans);
  
  return 0;
}