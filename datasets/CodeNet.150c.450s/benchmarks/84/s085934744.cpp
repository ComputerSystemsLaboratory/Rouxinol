#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF (1000000001)
int N;
int A[(1<<21)+1];
int T[(1<<21)+1];
ll res = 0;
void marge(int l,int r){
  if( r - l == 2 ){
    if( A[l] > A[r-1] ){
      res++;
      swap(A[l],A[r-1]);
    }
  } else {
    int m = (l+r)/2;
    marge(l,m);
    marge(m,r);
    for(int i=l,j=m,k=l;k<r;k++){
      if( (j < r && A[i] > A[j]) || i == m ){
        res += (m-i);
        T[k] = A[j++];
      } else {
        T[k] = A[i++];
      }
    }
    for(int i=l;i<r;i++) A[i] = T[i];
  }
  /*
  cout <<"( " <<  l << " , "<< r << " ) " << endl;
  for(int i=l;i<r;i++) cout << A[i] << " ";
  cout << endl;
  cout << "res = "<< res << endl;
  */
}


int main(){
  cin >> N;
  for(int i=0;i<N;i++) cin >> A[i];
  if( N == 1 ) cout << 0 << endl;
  else {
    int n = 1;
    while( n < N ) n *= 2; 
    for(int i=N;i<n;i++) A[i] = INF+i;
    N = n;
    marge(0,N);
    cout << res << endl;
  }
}