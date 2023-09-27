#include <iostream>
#include <algorithm>
#include <numeric>
#define MAX 1000
using namespace std;

int check(int a[], int b[], int k, int l, int n, int m){
  int c, d;

  c = a[k];
  d = b[l];

  a[k] = d;
  b[l] = c;

  if(accumulate(a, a + n, 0) == accumulate(b, b + m, 0)){
    a[k] = c;
    b[l] = d;
    return 1;
  } else {
    a[k] = c;
    b[l] = d;
    return 0;
  }
}

int main(){
  int n, m, sum_taro, sum_hanako, taro[MAX], hanako[MAX], difference;

  while(true){
    cin >> n >> m;
    
    if(n == 0 && m == 0) break;
    
    for(int i = 0; i < n; i++){
      cin >> taro[i];
    }
    for(int j = 0; j < m; j++){
      cin >> hanako[j];
    }
    
    sum_taro = accumulate(taro, taro + n, 0);
    sum_hanako = accumulate(hanako, hanako + m, 0);
    
    difference = abs(sum_taro - sum_hanako) / 2; //合計値の差の1/2
    
    sort(taro, taro + n);
    sort(hanako, hanako + m);
    
    for(int k = 0; k < n; k++){
      for(int l = 0; l < m; l++){
	if(taro[k] == hanako[l] + difference && check(taro, hanako, k, l, n, m) == 1){
	  cout << taro[k] << " " << hanako[l] << endl;
	  goto FINE;
	} else if(hanako[l] == taro[k] + difference && check(taro, hanako, k, l, n, m) == 1){
	  cout << taro[k] << " " << hanako[l] << endl;
	  goto FINE;
	}
      }
    }
    
    cout << "-1" << endl;
  FINE:
    ;
  }

  return 0;
}