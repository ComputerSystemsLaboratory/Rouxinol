#include<stdio.h>
#include<iostream>
using namespace std;
struct Card{char suit,value;};

void bubble(struct Card A[], int n){
  int i,j;
  bool flag=1;
  for ( i = 0; flag; i++ ){
      flag=0;
      for ( j = n-1; i < j; j-- ){
        if(A[j].value < A[j-1].value){
        swap(A[j],A[j-1]);
        flag=1;
        }
      }
  }
}

void selectinsert(struct Card A[], int n){
  int i,j,minv;
    for ( i = 0;i<n-1;i++){
      minv=i;
      for (j=i;n>j;j++){
        if(A[minv].value>A[j].value){
        minv=j;
        }
      }
      swap(A[i],A[minv]);
  }
}
void print(struct Card A[],int n){
int i;
  for ( i = 0; i < n; i++ ){
    if ( i > 0 ) cout << " ";
    cout << A[i].suit << A[i].value;
  }
  cout << endl;
}
bool isStable(struct Card A1[],struct Card A2[],int n){
int i;
  for ( i = 0; i < n; i++ ){
  if (A1[i].suit != A2[i].suit){
  return false;
  }

 }
 return true;
}


int main(){
  int n, i, j,sw;
  Card C1[100],C2[100];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) cin >> C1[i].suit >> C1[i].value ;
  for(i=0;i<n;i++)C2[i]=C1[i];
  bubble(C1,n);
  selectinsert(C2,n);
  print(C1,n);
  cout << "Stable" << endl;
  print(C2,n);
  if (isStable(C1,C2,n)){
  cout << "Stable" << endl;
  }else{
  cout << "Not stable" << endl;
  }

    return 0;
}