#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
int n;
vector<int>fig(100);
ll memo[21][101];

ll rec(ll sum,ll ind){  
  if(sum < 0 || sum > 20) return 0;
  if(ind == n-1) return (sum == fig[ind]? 1 : 0);
  if(memo[sum][ind] != 0) return memo[sum][ind];

  return memo[sum][ind] = rec(sum + fig[ind],ind+1) + rec(sum - fig[ind],ind+1);
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++) cin >> fig[i];
  cout << rec(fig[0],1) << endl;
}