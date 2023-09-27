#include <bits/stdc++.h>

#define MAX 100000
#define SENTINEL 2000000000

using namespace std;
struct Card{
  char design;
  int num;
};

Card L[MAX/2+2], R[MAX/2+2];

void mergeSort(Card[],int,int,int);
int partition(Card[],int,int,int);
void quickSort(Card[],int,int,int);
void merge(Card[],int,int,int,int);

int main(){
  int n,i,v;
  Card pre[MAX],subPre[MAX];
  char str[10];
  int stable = 1;
  cin >> n;
  for(i = 0; i < n; i++){
   cin >> str >> v;
   pre[i].design = subPre[i].design = str[0];
   pre[i].num = subPre[i].num = v;
  }

  mergeSort(pre,n,0,n);
  quickSort(subPre,n,0,n-1);

  for(i = 0; i < n; i++){
    if( pre[i].design != subPre[i].design ){
      stable = 0;
    }
  }
  if( stable == 1 ){
    cout << "Stable" << endl;
  }
  else{
    cout << "Not stable" << endl;
  }
  for(i = 0; i < n; i++){
    cout << subPre[i].design << " " << subPre[i].num << endl;
  }
  return 0;
}


void mergeSort(Card pre[], int n, int left, int right){
  int mid;
  if(left +1 < right){
    mid = (left + right)/2;
    mergeSort(pre,n,left,mid);
    mergeSort(pre,n,mid,right);
    merge(pre, n,left,mid,right);
  }
}


int partition(Card pre[],int n,int p,int r){
  int i,j;
  Card card1,card2;
  card2 = pre[r];
  i = p-1;
  for(j = p; j < r; j++){
    if(pre[j].num <= card2.num){
      i++;
      card1 = pre[i];
      pre[i] = pre[j];
      pre[j] = card1;
    }
  }
  card1 = pre[i+1];
  pre[i+1] = pre[r];
  pre[r] = card1;
  return i+1;
}


void quickSort(Card pre[],int n, int p, int r){
  int q;
  if(p < r){
    q = partition(pre,n,p,r);
    quickSort(pre,n,p,q-1);
    quickSort(pre,n,q+1,r);
  }
}

void merge(Card pre[],int n, int left, int mid, int right){
  int i,j,k;
  int n1 = mid-left;
  int n2 = right - mid;
  for(i = 0; i < n1; i++){
    L[i] = pre[left+i];
  }
  for(i = 0; i < n2; i++){
    R[i] = pre[mid+i];
  }
  L[n1].num = R[n2].num = SENTINEL;
  i = j = 0;
  for(k = left; k < right; k++){
    if(L[i].num <= R[j].num){
      pre[k] = L[i++];
    }
    else{
      pre[k] = R[j++];
    }
  }
}