#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
const double EPS = 1e-10;//sample:if((double)>=(double)+EPS)
#define CLR(a) memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)  cerr << #x << " = " << (x) << endl;//debug
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);


using namespace std;

int main(){
  int n,a;
  cin>>n;
  int A[100000]={};
  for(int i=0;i<n;i++){
    cin>>a;
    A[a]++;
  }
  for(int i=0,cnt=0;i<100000;i++)
    for(int j=0;j<A[i];j++,cnt++){
      if(cnt!=0)
	printf(" ");
      printf("%d",i);
    }
  cout<<endl;
  return 0;
}

