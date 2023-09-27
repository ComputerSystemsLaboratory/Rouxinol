#include <iostream>
#include <cstdio>
#include <cstring>
#define SENTINEL 1000000001
using namespace std;

struct Card{
  char suit;
  int num;
};

void merge(Card A[],int left, int mid,int right){
  int nl=mid-left;
  int nr=right-mid;
  Card L[nl+1];Card R[nr+1];
  L[nl].num = SENTINEL; R[nr].num = SENTINEL;
  for(int i=0;i<nl;i++) L[i] = A[left+i];
  for(int i=0;i<nr;i++) R[i] = A[mid +i];
  int il=0; int ir=0;
  for(int i=left;i<right;i++){
    if(L[il].num <= R[ir].num){
      A[i] = L[il];
      il++;
    }else{
      A[i] = R[ir];
      ir++;
    }
  }
}

void mergesort(Card A[],int left,int right){
  if(left + 1<right){
    int mid = (left + right)/ 2;
    mergesort(A,left,mid);
    mergesort(A,mid,right);
    merge(A,left,mid,right);
  }
}

int partition(Card A[],int p,int r){
  int x = A[r].num;
  int i = p-1;
  for(int j=p;j<r;j++){
    if(A[j].num<=x){
      i++;
      swap(A[j],A[i]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

void quicksort(Card A[],int p,int r){
  if(p<r){
    int q=partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
  }
}

bool is_stable(Card A[],Card B[],int n){
  for(int i=0;i<n;i++){
    if(A[i].suit != B[i].suit) return false;
  }
  return true;
}

int main(){
  int n;cin>>n;
  Card cards[n];
  Card cards2[n];
  for(int i=0;i<n;i++){
    cin>>cards[i].suit;
    cin>>cards[i].num;
  }
  memcpy(cards2,cards,sizeof(cards));
  quicksort(cards,0,n-1);
  mergesort(cards2,0,n);
  if(is_stable(cards,cards2,n)){
    printf("Stable\n");
  }else{
    printf("Not stable\n");
  }
  for(int i=0;i<n;i++){
    printf("%c %d\n",cards[i].suit,cards[i].num);
  }
}