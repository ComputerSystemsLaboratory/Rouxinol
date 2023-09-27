#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAX 86400

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int train[MAX] = {0};
    int ma = 0;

    while(n--){

      int h1,m1,s1,h2,m2,s2;
      scanf("%d:%d:%d",&h1,&m1,&s1);
      int total_s1 = h1*3600 + m1*60 + s1;
      scanf("%d:%d:%d",&h2,&m2,&s2);
      int total_s2 = h2*3600 + m2*60 + s2;
      ma = max( ma , total_s1 );
      for( int i = total_s1 ; i < total_s2 ; i++ )
	train[i]++;

    }
    int ans = 0;
    for( int i = 0 ; i <= ma ; i++ ){
      ans = max( ans , train[i] );
    }
    cout << ans << endl;

  }
  return 0;
}