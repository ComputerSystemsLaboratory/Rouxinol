#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,k,s,ans,term,ans_t;
vector<int> a_n;
int m,t;

int main()
{

  while(1){
    m = 0;
    ans_t =	0;

    cin>>n>>k;

    if(n == 0 && k == 0){
      break;
    }

    for(int q = 0;q < n;++q){
      cin>>term;
      a_n.push_back(term);
    }

    for(int q =	0;q < n;++q){
      if(q < k){
        ans_t += a_n[q];
        ans = ans_t;
      }
      else{
        m = ans_t	+ a_n[q] - a_n[q-k];
        if(m > ans){
          ans = m;
	}
        ans_t = m;
      }
    }
    cout<<ans<<endl;
  }

  return 0;
}