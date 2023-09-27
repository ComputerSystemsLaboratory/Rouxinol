#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<random>
#include<map>
#include<queue>
using namespace std;

int main(){

  int n, p;
  while(cin >> n >> p){
    if( n == 0 && p == 0 ) break;

    long long int step = 0;
    vector<int> a(n, 0);
    int tmp = p;
    while(true){
      step %= n;
      if( p != 0 ){
        p--;
        a[step]++;
      }else{
        if( a[step] != 0 && a[step] != tmp ){
          p += a[step];
          a[step] = 0;
        }else if(a[step] == tmp){
          cout << step << endl;
          break;
        }
      }
      step++;
    }
  }

  return 0;
}