#include<iostream>

using namespace std;

bool ok(int P,int k,int n,int* w){
  int weight=0,howmany=1;
  int i=0;
  while(i<n){
    if( weight + w[i] <= P ){
      weight += w[i];
      i++;
    }else if( w[i] > P ){
      howmany = k + 1;
      i=n;
    }else{
      weight = w[i];
      howmany++;
      i++;
    }
  }

  if( howmany <= k) return 1;
  else return 0;
}

int main(void){
  int n,k;
  cin >> n >> k;
  int w[n];
  for(int i=0;i<n;i++) cin >> w[i];
  
  int l=0,h=10000*n;
  while(l+1<h){
    int m = (l+h)/2;
    if(ok(m,k,n,w)) h=m;
    else l = m;
  }
  cout << l+1 << endl;
}