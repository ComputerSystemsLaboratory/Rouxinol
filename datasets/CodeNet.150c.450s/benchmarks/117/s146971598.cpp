#include <iostream>
#define INF 1000000001

using namespace std;

int cnt=0;

void merge(int a[],int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  int L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++) L[i]=a[left+i];
  for(int i=0;i<n2;i++) R[i]=a[mid+i];
  L[n1]=INF; R[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    cnt++;
    if(L[i]<=R[j]){
      a[k]=L[i];
      i++;
    }else{
      a[k]=R[j];
      j++;
    }
  }
}

void mergeSort(int a[],int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(a,left,mid);
    mergeSort(a,mid,right);
    merge(a,left,mid,right);
  }
}

int main(){
  int n; cin >> n;
  int s[n];
  for(int i=0;i<n;i++) cin >>s[i];
  mergeSort(s,0,n);
  for(int i=0;i<n;i++){
    if(i) cout <<" "<<s[i];
    else cout <<s[i];
  }
  cout << endl;
  cout << cnt << endl;
}