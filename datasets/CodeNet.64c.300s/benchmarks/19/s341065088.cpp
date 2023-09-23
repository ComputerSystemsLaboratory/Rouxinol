#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  int n;
  long a[5000];
  long long max, tmp;

  while(cin >> n && n != 0){
    for(int i = 0; i < n; i++) cin >> a[i];
    max = a[0]; tmp = 0;

    for(int i = 0; i < n; i++){
      for(int j = i; j < n; j++){
        tmp += a[j];
        if(max < tmp) max = tmp;
      }
      tmp = 0;
    }
    cout << max << endl;
  }
  return 0;
}