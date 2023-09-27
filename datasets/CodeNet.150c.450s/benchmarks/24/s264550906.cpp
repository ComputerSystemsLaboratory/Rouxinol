#include <iostream>
#define N 10000
using namespace std;

int d[N];
int p[N];
void mergeSort(int, int);
void merge(int, int, int);
int main(){
  int n, m;
  while(1){
    cin >> n >> m;
    if(n==0 && m==0) break;

    for(int i=0;i<n;i++){
      cin >> d[i] >> p[i];
    }

    mergeSort(0, n);

    for(int i=n-1;i>=0;i--){
      if(m>d[i]){
        m-=d[i];
        d[i]=0;
      }
      else{
        d[i]-=m;
        m=0;
        break;
      }
    }

    int ans=0;
    for(int i=0;i<n;i++){
      ans+=d[i]*p[i];
    }

    cout << ans << endl;
  }
  return 0;
}

void merge(int left, int mid, int right){
  int L[N/2+2], R[N/2+2];
  int l[N/2+2], r[N/2+2];
  int n1=mid-left;
  int n2=right-mid;
  for(int i=0;i<n1;i++){
    L[i]=p[left+i];
    l[i]=d[left+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=p[mid+i];
    r[i]=d[mid+i];
  }

  L[n1]=R[n2]=2147483647;
  l[n1]=r[n2]=2147483647;
  int i, j;
  i=j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      p[k]=L[i];
      d[k]=l[i++];
    }
    else{
      p[k]=R[j];
      d[k]=r[j++];
    }
  }
}


void mergeSort(int left, int right){
  if(left>=right-1) return;
  int mid=(left+right)/2;
  mergeSort(left, mid);
  mergeSort(mid, right);
  merge(left, mid, right);
}