#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,M;
int H[1666];
int W[1666];

ll h[2000000];
ll w[2000000];

int main() {
  while( cin >> N >> M && (N || M) ){
    for(int i=0;i<N;i++){
      int hi;
      cin >> hi;
      H[i+1] = H[i] + hi;
    }
    for(int i=0;i<M;i++){
      int wi;
      cin >> wi;
      W[i+1] = W[i] + wi;
    }

    memset(h,0,sizeof(h));
    memset(w,0,sizeof(w));

    for(int i=0;i<N;i++){
      for(int j=0;j<N-i;j++){
	int nd = i+j;
	h[H[nd+1]-H[j]]++;
      }
    }
    for(int i=0;i<M;i++){
      for(int j=0;j<M-i;j++){
	int nd = i+j;
	w[W[nd+1]-W[j]]++;
      }
    }
    ll res = 0;
    for(int i=0;i<=2000000;i++){
      res += h[i]*w[i];
    }
    cout << res << endl;
  }
}