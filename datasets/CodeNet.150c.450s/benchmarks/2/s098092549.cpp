#include<iostream>

using namespace std;

#define N 100001

int Partition(int a[],int p,int r){
  int x,i,j,st;

  x=a[r];
  i=p-1;

  for(j=p;j<=r-1;j++){
    if(a[j]<=x){
      i++;
      st=a[i];
      a[i]=a[j];
      a[j]=st;
    }
  }
    st=a[i+1];
    a[i+1]=a[r];
    a[r]=st;
    return i+1;

}

int main(){

  int a[N],n,i;
  int f;

  cin >>n;

  for(i=0;i<n;i++){
    cin >>a[i];
  }


  f=Partition(a,0,n-1);

  for(i=0;i<n;i++){
    if(i!=f)cout <<a[i];
    if(i==f)cout <<"["<<a[i]<<"]";
    if(i!=n-1)cout <<" ";
  }
  cout <<endl;

  return 0;
}