#include <iostream>

int total(int k);

using namespace std;
int main() {
  int n, m, i, j, sum, squares;
  while(cin >> n >> m){
    if(n==0 && m==0){break;}
    int h[n], w[m];
    for(i=0; i<n; i++){
      cin >> h[i];
    }
    for(i=0; i<m; i++){
      cin >> w[i];
    }
    int array[1500001];
    for (i = 0; i < 1500001; ++i){
      array[i] = 0;
    }
    for (i = 0; i < n; ++i){
        sum = 0;
      for (j = 0; j < n-i; ++j){
        sum += h[i+j];
        array[sum]++;
      }
    }

    squares = 0;
    for (i = 0; i < m; ++i){
        sum = 0;
      for (j = 0; j < m-i; ++j){
        sum += w[i+j];
        squares += array[sum];
      }
    }
    cout << squares <<endl;
  }

}


int total(int k){
  int i, sum;
  sum = 0;
  for (i = 0; i < k; ++i){
    sum += (k-i);
  }
  return sum;
}