#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
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
  int n ;
  cin >> n;
  int m = 100000;
  rep(i,n){
    m *= 1.05;
    if((int)m % 1000 != 0)
      m = m - (int) m % 1000 + 1000;
  }
  cout << m << endl;
}