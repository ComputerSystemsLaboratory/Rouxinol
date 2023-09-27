#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
  int dataset, i, j, k, alen, blen;
  string a, b;
  cin >> dataset;
  for (i = 0; i < dataset; ++i){
    cin >> a >> b;
    alen = a.length();
    blen = b.length();
    int lcs[alen+1][blen+1];
    for (j = 0; j <= alen; ++j){
      for (k = 0; k <= blen; ++k){
        lcs[j][k] = 0;
      }
    }
    for (j = 1; j <= alen; ++j){
      for (k = 1; k <= blen; ++k){
        if(a.at(j-1) == b.at(k-1)){
          lcs[j][k] = lcs[j-1][k-1] + 1;
        }else{
          lcs[j][k] = max(lcs[j-1][k], lcs[j][k-1]);
        }
      }
    }
    cout << lcs[alen][blen] << endl;
  }
}