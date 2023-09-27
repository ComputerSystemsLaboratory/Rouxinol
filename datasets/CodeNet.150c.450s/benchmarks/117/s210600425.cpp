#include <stdio.h>
#define INF 999999999

int l[250002] = {};
int r[250002] = {};
int c ;

 int s[500000];

void merge(int left,int mid,int right){

  int i,j,k;
  int n1 = mid - left;
  int n2 = right - mid;

  for(i = 0;i < n1;i++) l[i] = s[left + i];
  for(i = 0;i < n2;i++) r[i] = s[mid + i];

  l[n1] = INF;
  r[n2] = INF;

  i = j = 0;
  
  for(k = left;k < right;k++){
    c++;
    if(l[i] <= r[j]){
      s[k] = l[i];
      i++;
    }
    else{
      s[k] = r[j];
      j++;
    }
  }
}

void mergesort(int left,int right){
  int mid;
  if(left + 1 < right){
    mid = (left + right) / 2;
    mergesort(left,mid);
    mergesort(mid,right);
    merge(left,mid,right);
  }
}
    
int main(){
  
  int n,i,left,right;
 
  c = 0;
  
  scanf("%d",&n);
  for(i = 0;i < n;i++) scanf("%d",&s[i]);

  
  left = 0;right = n;

  mergesort(left,right);

  for(i = 0;i < n;i++){
    if(i != n - 1) printf("%d ",s[i]);
    else printf("%d\n",s[i]);
  }
  printf("%d\n",c);
  return 0;
}