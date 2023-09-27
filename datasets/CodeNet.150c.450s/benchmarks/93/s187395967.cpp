#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int b[2][100000];
char c[2][100000];
int partition(int p,int r){
  int x=b[0][r],j,i=p-1;

  for(j=p;j<r;j++){
    if(b[0][j]<=x){
      i=i+1;
      swap(b[0][i],b[0][j]);
      swap(c[0][i],c[0][j]);
    }
  }
  
  swap(b[0][i+1],b[0][r]);
  swap(c[0][i+1],c[0][r]);
  return i+1;
}
void quicksort(int p,int r){
  if(p<r){
    int q=partition(p,r);
    quicksort(p,q-1);
    quicksort(q+1,r);
  }
}
/*
void bubblesort(int n){
  bool flag=1;
  while(flag){
    flag=0;
    for(int j=n-1;j>0;j--){
      if(b[1][j]<b[1][j-1]){
	swap(b[1][j],b[1][j-1]);
	swap(c[1][j],c[1][j-1]);
	flag=1;
      }
    }
  }

}
*/

void merge(int left,int mid ,int right){
  int n1=mid-left,n2=right-mid;
  int l[n1+1],r[n2+1];
  char cl[n1+1],cr[n2+1];
    for(int i=0;i<n1;i++){
    l[i]=b[1][left+i];
    cl[i]=c[1][left+i];
    }
  for(int i=0;i<n2;i++){
    r[i]=b[1][mid+i];
    cr[i]=c[1][mid+i];
  }
  l[n1]=r[n2]=1+pow(10,9);
  int i=0,j=0,k;
  for(k=left;k<right;k++){
    if(l[i]<=r[j]){
      b[1][k]=l[i];
      c[1][k]=cl[i];
      i++;

    }
    else{
      b[1][k]=r[j];
      c[1][k]=cr[j];
      j++;

    }
  }
}
void mergesort(int left,int right){
  int mid;
  if(left+1<right){
    mid = (left +right)/2;
    mergesort(left,mid);
    mergesort(mid,right);
    merge(left,mid,right);
  }
}



void comp(int n){
  bool jud=1;
  for(int i=0;i<n;i++){
    if(c[0][i]!=c[1][i]){
      jud=0;
      break;
    }
  }
  if(!jud)cout<<"Not stable"<<endl;
  else cout<<"Stable"<<endl;
}




int main(){
  int n,i;
  cin>>n;
  for(i=0;i<n;i++)cin>>c[0][i]>>b[0][i];
  for(i=0;i<n;i++){
    c[1][i]=c[0][i];
    b[1][i]=b[0][i];
  }
  quicksort(0,n-1);
  //bubblesort(n);
  mergesort(0,n);
  comp(n);
  for(i=0;i<n;i++)cout<<c[0][i]<<" "<<b[0][i]<<endl;

  return 0;
}

