#include <iostream>
#define maxn 100000
#define INFTY 2000000000
using namespace std;

struct Card {
  char suit;
  int value;
};

struct Card L[maxn/2+2],R[maxn/2+2];

void merge(struct Card *Array,int left,int mid,int right) {
  int n1=mid-left;
  int n2=right-mid;
  for (int i=0; i<n1; i++) {
    L[i]=Array[left+i];
  }
  for (int i=0; i<n2; i++) {
    R[i]=Array[mid+i];
  }
  L[n1].value=R[n2].value=INFTY;
  int i=0,j=0;
  for (int k=left; k<right; k++) {
    if (L[i].value<=R[j].value) {
      Array[k]=L[i++];
    }
    else {
      Array[k]=R[j++];
    }
  }
}
void mergeSort(struct Card *Array,int left,int right) {
  if (left+1<right) {
    int mid=(left+right)/2;
    mergeSort(Array,left,mid);
    mergeSort(Array,mid,right);
    merge(Array,left,mid,right);
  }
}
int partition(struct Card *Array,int index,int p,int r) {
  int i,j;
  struct Card x=Array[r];
  i=p-1;
  for (j=p; j<r; j++) {
    if (Array[j].value<=x.value) {
      i++;
      swap(Array[i],Array[j]);
    }
  }
  swap(Array[i+1],Array[r]);
  return i+1;
}
void quickSort(struct Card *Array,int index,int p,int r) {
  int q;
  if (p<r) {
    q=partition(Array,index,p,r);
    quickSort(Array,index,p,q-1);
    quickSort(Array,index,q+1,r);
  }
}
int main() {
  int n,i,v;
  struct Card A[maxn],B[maxn];
  char S[10];
  bool stable=true;
  cin>>n;
  for (i=0; i<n; i++) {
    cin>>S>>v;
    A[i].suit=B[i].suit=S[0];
    A[i].value=B[i].value=v;
  }
  mergeSort(A,0,n);
  quickSort(B,n,0,n-1);
  for (i=0; i<n; i++) {
    if (A[i].suit!=B[i].suit) {
      stable=false;
    }
  }
  if (stable) {
    cout<<"Stable"<<endl;
  }
  else {
    cout<<"Not stable"<<endl;
  }
  for (i=0; i<n; i++) {
    cout<<B[i].suit<<" "<<B[i].value<<endl;
  }
  return 0;
}
