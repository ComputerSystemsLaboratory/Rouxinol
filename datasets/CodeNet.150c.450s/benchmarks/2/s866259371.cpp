#include <iostream>

using namespace std;

int partition(int a[],int p,int r){
  int x=a[r];
  int i=p-1;
  for(int j=p;j<=r-1;j++){
    if(a[j]<=x){
      i++;
      int t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
  }
  int t=a[i+1];
  a[++i]=a[r];
  a[r]=t;
  return i;
}

int main(){
  int n; cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  int idx=partition(a,0,n-1);
  for(int i=0;i<n;i++){
    if(i==idx){
      if(i) cout << " " << '[' << a[i] << ']';
      else cout << a[i];
    }else{
      if(i) cout << " " << a[i];
      else cout << a[i];
    }
  }
  cout << endl;
}