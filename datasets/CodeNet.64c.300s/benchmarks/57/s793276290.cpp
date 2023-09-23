#include<iostream>
#include<vector>
using namespace std;

int data_tmp[10][10000];
int main() {
  while(1){
    int n, m;
    cin >> n;
    cin >> m;
    if(n == 0 && m == 0) {
      return 0;
    }
    for(int ii = 0 ; ii < m ; ii ++) {
      for(int i = 0 ; i < n ;i++) {
        data_tmp[i][ii] = 0;
      }
    }
    for(int i = 0 ; i < n ;i++) {
      for(int ii = 0 ; ii < m ; ii ++) {
        int tmp;
        cin >> tmp;
        data_tmp[i][ii] = tmp;
      }
    }
    int max = 0;
    for(int c = 0 ; c < (1 << n) ;c++) {
      int tmp= 0;
      for(int ii = 0 ; ii < m ; ii ++) {
        int co = 0;
        for(int i = 0 ; i < n ;i++) {
          int f = (1 << i) & c;
          if(f!=0) {
            co += data_tmp[i][ii] == 0 ? 1 : 0;
          } else {
            co += data_tmp[i][ii];
          }
        }
        tmp += (float)n/2 > co ? n -co : co;
      }
      if (tmp > max) max = tmp;
    }
    cout << max <<endl;

  }
  return 0;
}
