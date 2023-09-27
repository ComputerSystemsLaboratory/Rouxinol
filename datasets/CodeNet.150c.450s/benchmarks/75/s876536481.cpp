#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;

int n,A[5000000];
void maxheapify(int i){
  int l=2*i,r=2*i+1,largest;
  if(l<=n&&A[l]>A[i])largest=l;
  else largest=i;
  if(r<=n&&A[r]>A[largest])largest=r;
  if(largest!=i){
    swap(A[i],A[largest]);
    maxheapify(largest);
  }
}
int main(){
  cin>>n;
  FOR(i,1,n+1)cin>>A[i];
  for(int i=n/2;i>=1;i--)maxheapify(i);
  FOR(i,1,n+1)cout<<" "<<A[i];
  cout<<endl;
  return 0;
}
