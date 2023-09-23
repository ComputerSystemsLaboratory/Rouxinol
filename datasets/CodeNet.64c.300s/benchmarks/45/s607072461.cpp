#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

  int n,m,p;
  while( cin >> n >> m >> p , n || m || p ){

    int a,b = 0;
    int total = 0;

    for( int i = 1 ; i <= n ; i++ ){
      cin >> a; 
      if(i == m) b = a;
      total += a;
    }
    if(b){
      total = total * 100 * (100 - p)/ (b * 100);
      cout << total << endl;
    }else cout << "0" << endl;
  }
  return 0;
}