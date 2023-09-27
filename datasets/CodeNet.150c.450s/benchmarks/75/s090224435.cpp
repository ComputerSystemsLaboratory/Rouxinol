#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;

int r, l, H, A[500001];

void MaxHeapfy(int i){
  int lagest;
  l = i * 2;
  r = i * 2 + 1;
  lagest = i;
  if(l <= H && A[l] > A[lagest]) lagest = l;
  if(r <= H && A[r] > A[lagest]) lagest = r;

  if( lagest != i) {
    swap(A[lagest], A[i]);
    MaxHeapfy(lagest);
  }
}

void BuildMaxHeap(){
  for(int i = H/2; i > 0; i--){
    MaxHeapfy(i);
  }
}

int main(){
  cin >> H;
  rep(i,H){
    cin >> A[i + 1];
  }
  BuildMaxHeap();
  rep(i,H){
    cout << " " << A[i + 1];
  }
  cout << endl;
  return 0;
}
