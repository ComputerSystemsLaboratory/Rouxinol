#include <iostream>
#define INF 1000000001

using namespace std;

struct Card{char suit; int value;};

int partition(Card c[],int p,int r){
  int x=c[r].value;
  int i=p-1;
  for(int j=p;j<=r-1;j++){
    if(c[j].value<=x){
      i++;
      Card t=c[i];
      c[i]=c[j];
      c[j]=t;
    }
  }
  Card t=c[++i];
  c[i]=c[r];
  c[r]=t;
  return i;
}

void quicksort(Card c[],int p,int r){
  if(p<r){
    int q=partition(c,p,r);
    quicksort(c,p,q-1);
    quicksort(c,q+1,r);
  }
}

void merge(Card c[],int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  Card L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++) L[i]=c[left+i];
  for(int i=0;i<n2;i++) R[i]=c[mid+i];
  L[n1].value=INF; R[n2].value=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i].value<=R[j].value){
      c[k]=L[i++];
    }else{
      c[k]=R[j++];
    }
  }
}

void mergeSort(Card c[],int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(c,left,mid);
    mergeSort(c,mid,right);
    merge(c,left,mid,right);
  }
}

bool compare(Card c1[],Card c2[],int n){
  for(int i=0;i<n;i++){
    if(c1[i].suit!=c2[i].suit) return false;
  }
  return true;
}

int main(){
  int n; cin >> n;
  Card c1[n],c2[n];
  for(int i=0;i<n;i++){
    cin >> c1[i].suit >> c1[i].value;
    c2[i]=c1[i];
  }
  quicksort(c1,0,n-1);
  mergeSort(c2,0,n);
  bool isStable=compare(c1,c2,n);
  if(isStable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0;i<n;i++)
    cout << c1[i].suit << " " << c1[i].value << endl;
}