//	created : 16/05/02
// 	author   : Rp7rf
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9


int main(void){
  int n;
  while(cin>>n,n){
    int sum = 0;
    int ret = 0;
    int l = 0;
    for(int r = 0 ; r < n ; r ++){      
      sum += r;
      
      if(sum == n)ret++;
      if(sum > n){
        sum -= l + r;
        l++;
        r--;
//        cout<<r<<" "<<l<<" "<<sum<<endl;
        continue;
      }
//      cout<<r<<" "<<l<<" "<<sum<<endl;
    }
//    cout<<n<<" "<<sum<<endl;
    cout<<ret<<endl;
  }
}