#include<iostream>
using namespace std;

int main(){

  int n, m, s[101], t[101];

  while(cin >> n >> m && n && m){
    int x, y, sum1 = 0, sum2 = 0, sum = 200;
    bool flag = true;
    for(int i=0; i<n; i++){
      cin >> s[i];
      sum1 += s[i];
    }

    for(int i=0; i<m; i++){
      cin >> t[i];
      sum2 += t[i];
    }

    int nsum = sum1, msum = sum2;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        sum1 = sum1 - s[i] + t[j];
        sum2 = sum2 - t[j] + s[i];
        if(sum1==sum2 && sum>s[i]+t[j]){
          sum = s[i] + t[j];
          x = s[i];
          y = t[j];
          flag = false;
        }
        sum1 = nsum, sum2 = msum;
      }
    }

    if(flag){
      cout << -1 << endl;
    } else {
      cout << x << " " << y << endl;
    }

    sum1=0, sum2=0, sum=200;
  }
  return 0;
}