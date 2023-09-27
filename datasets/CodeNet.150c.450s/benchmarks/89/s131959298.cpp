#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a; i<b; ++i)
#define rFOR(i, a, b) for(int i=a-1; i>=b; --i)
#define REP(i, n) for(int i=0; i<n; ++i)
#define rREP(i, n) for(int i=n-1; i>=0; --i)
#define all(a)  a.begin(), a.end()
#define MAXNUM 5000
using namespace std;
typedef long long ll;

int main(){
  while(true){
    int a, d, n;  cin >> a >> d >> n;
    if(a+d+n == 0)  break;
    int num;
    vector<int> prime;
    REP(i, MAXNUM){
      bool judge = true;
      num = a + (i * d);
      FOR(j, 2, sqrt(num)+1){
        if(num%j == 0){
          judge = false;
          break;
        }
      }
      if((judge || num == 2) && num!=0 && num!=1) prime.push_back(num);
    }
    cout << prime[n-1] << endl;
  }
  return 0;
}

