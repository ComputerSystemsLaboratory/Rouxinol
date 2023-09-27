#include <iostream>
#define INF 2000000000

using namespace std;

long long merge(int a[],int left,int mid,int right){
  long long cnt=0;
  int n1=mid-left;
  int n2=right-mid;
  int L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++) L[i]=a[left+i];
  for(int i=0;i<n2;i++) R[i]=a[mid+i];
  L[n1]=INF; R[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      a[k]=L[i];
      i++;
    }else{
      a[k]=R[j];
      cnt=cnt+(n1-i);
      j++;
    }
  }
  return cnt;
}
long long mergeSort(int a[],int left,int right){
  long long v1,v2,v3;
  if(left+1<right){
    int mid=(left+right)/2;
    v1=mergeSort(a,left,mid);
    v2=mergeSort(a,mid,right);
    v3=merge(a,left,mid,right);
    return v1+v2+v3;
  }else return 0;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  long long ans=mergeSort(a,0,n);
  cout << ans << endl;
}