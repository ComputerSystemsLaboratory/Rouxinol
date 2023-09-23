#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

int h;

void maxHeapify(int A[],int i){
  if(i>h/2) return;
  
  int l,r,largest;
  l=2*i;
  r=2*i+1;
  if(A[l]>A[i]) largest=l;
  else largest=i;
  if(r<=h && A[r]>A[largest]) largest=r;
  
  if(largest != i){
    swap(A[i],A[largest]);
    maxHeapify(A,largest);
  }
}

int main() {
  cin>>h;
  
  int vec[500010];
  for(int i=1;i<=h;i++) cin>>vec[i];
  
  for(int i=h/2;i>0;i--) maxHeapify(vec,i);
  
  for(int i=1;i<=h;i++) cout<<" "<<vec[i];
  cout<<endl;
      
  return 0;
}
