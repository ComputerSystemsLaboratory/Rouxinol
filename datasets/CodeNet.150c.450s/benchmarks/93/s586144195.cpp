#include <iostream>
#include <utility>

#define INF 1000000001

using namespace std;

int partition(pair<char,int> a[],int p,int r){
  int x=a[r].second;
  int i=p-1;
  for(int j=p;j<r;j++){
    if(a[j].second<=x){
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[r]);
  return i+1;
}

void quicksort(pair<char,int> a[],int p,int r){
  if(p<r){
    int q=partition(a,p,r);
    quicksort(a,p,q-1);
    quicksort(a,q+1,r);
  }
}

void merge(pair<char,int> a[],int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  pair<char,int> L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++) L[i]=a[left+i];
  for(int i=0;i<n2;i++) R[i]=a[mid+i];
  L[n1].second=INF; R[n2].second=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i].second<=R[j].second){
      a[k]=L[i];
      i++;
    }else{
      a[k]=R[j];
      j++;
    }
  }
}

void mergeSort(pair<char,int> a[],int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(a,left,mid);
    mergeSort(a,mid,right);
    merge(a,left,mid,right);
  }
}

int main(){
  int n; cin >> n;
  pair<char,int> a[n],b[n];
  for(int i=0;i<n;i++){
    char c; cin >> c;
    int x; cin >> x;
    a[i]=make_pair(c,x);
    b[i]=make_pair(c,x);
  }
  quicksort(a,0,n-1);
  mergeSort(b,0,n);
  bool isStable=true;
  for(int i=0;i<n;i++){
    if(a[i].first != b[i].first){
      isStable=false;
      break;
    }
  }
  if(isStable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0;i<n;i++)
    cout << a[i].first << " " << a[i].second << endl;
}