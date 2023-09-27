#include <iostream>
#define INF 1000000005;
using namespace std;

int merge(long long int*, int, int, int);
int mergeSort(long long int*, int, int);

int main(){
  int n; cin >> n;
  long long int a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  int ans;
  ans = mergeSort(a, 0, n);

  for(int i=0; i<n; i++){
    cout << a[i];
    if(i!=n-1) cout << " ";
  }
  cout << endl << ans << endl;

  return 0;
}

int merge(long long int* a, int left, int mid, int right){
  int n1=mid-left, n2=right-mid;
  long long int l[n1+1], r[n2+1];
  for(int i=0; i<n1; i++) l[i] = a[left+i];
  for(int i=0; i<n2; i++) r[i] = a[mid+i];
  l[n1]=INF; r[n2]=INF;

  int i=0, j=0;
  int count=0;
  for(int k=left; k<right; k++){
    if(l[i]<=r[j]){
      a[k] = l[i];
      i++;
    }else{
      a[k] = r[j];
      j++;
    }
    count++;
  }
  return count;
}

int mergeSort(long long int* a, int left, int right){
  int count=0;
  if(left+1<right){
    int mid = (left+right)/2;
    count += mergeSort(a, left, mid);
    count += mergeSort(a, mid, right);
    count += merge(a, left, mid, right);
  }
  return count;
}

