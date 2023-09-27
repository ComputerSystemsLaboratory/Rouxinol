#include<bits/stdc++.h>
#define pb push_back
#define Nmax 210
#define M 63
using namespace std;
typedef long long ll;
string s;
int N, n, T;
bitset<M> A[Nmax];
ll a[Nmax];

bool gauss() { //true if linearly dep
  int i=0,j=0;
  
  while(i<N && j<M) {
    int k;
    for(k=i;k<N;++k) if(A[k][j]) break;
    if(k==N) { ++j; continue; }
    if(k!=i) swap(A[i], A[k]);

    for(int u=i+1;u<N;++u) {
      for(int q=j+1;q<M;++q) A[u][q] = (A[u][q] ^ (A[u][j]*A[i][q]));
      A[u][j]=0;
    }
    ++i; ++j;
  }

  return (A[N-1] == 0);
}

int main() {

  cin>>T;
  while(T--) {
    cin>>n;
    N = 0;
    for(int i=0;i<n;++i) cin>>a[i];

    cin>>s;
    if(s[N-1] == '1') {
      cout<<"1\n";  
      continue;
    }
    bool ok = true;

    for(int i=n-1;i>=0;--i) {
      A[N++] = a[i];
      if(s[i] == '1') {
        if(!gauss()) {
          ok = false;
          break;  
        }
        --N;
      } else {
        if(gauss()) {
          --N;
        }
      }
    }
    
    if(!ok) {
      cout<<"1\n";  
    } else {
      cout<<"0\n";
    }
  }
  return 0;
}