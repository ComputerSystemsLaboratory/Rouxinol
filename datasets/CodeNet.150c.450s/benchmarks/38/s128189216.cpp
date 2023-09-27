#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int main(void){
  vi inp(3);
  int n ;
  cin >> n ;
  while(n--){
    rep(i,3)
      cin >> inp[i] ;
    sort(all(inp));
    if(inp[0]*inp[0]+inp[1]*inp[1]==inp[2]*inp[2])
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
  }
}