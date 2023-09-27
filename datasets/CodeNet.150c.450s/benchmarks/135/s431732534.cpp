#include <iostream>
using namespace std;

int main(){
  int i,j,index,n,m,ns[1501],ew[1501],data[1000001],data2[1000001];
  while(1){
    cin >> n >> m;
    if( n == 0 && m == 0 ) break;
    for( i = 1; i <= 1000000; i++ ){
      data[i] = 0;
      data2[i] = 0;
    }
    for( i = 1; i <= n; i++ ){
      cin >> ns[i];
      data[ ns[i] ]++;
    }
    for( i = 1; i <= m; i++ ){
      cin >> ew[i];
      data2[ ew[i] ]++;
    }
    
    while( n >= 2 ){
      for( i = 1; i < n; i++ ){
	index = 0;
	for( j = i; j <= n; j++ ){
	  index += ns[j];
	}
	data[index]++;
      }
      n--;
    }
    
    
    while( m >= 2 ){
      for( i = 1; i < m; i++ ){
	index = 0;
	for( j = i; j <= m; j++ ){
	  index += ew[j];
	}
	data2[index]++;
      }
      m--;
    }
    
    int cnt = 0;
    for( i = 1; i <= 1000000; i++ ){
      cnt += data[i] * data2[i];
    }
         
    cout << cnt << endl;
    
  }
  
  return 0;
}