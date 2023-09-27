#include <iostream>
#include <vector>
using namespace std;

int main(void){
  while(true){
    int n, r;
    cin >> n >> r;
    if(n == 0 && r == 0){ break; }

    int p, c;
    vector<int> hanafuda(n);
    for(int i = 0; i < n; i++){ hanafuda[i] = n - i; }
    for(int i = 0; i < r; i++){
      cin >> p >> c;
      --p;
      vector<int> tmp;
      for(int j = p; j < p + c; j++){ tmp.push_back(hanafuda[j]); }
      for(int j = p - 1; j >= 0; j--){ hanafuda[j + c] = hanafuda[j]; }
      for(int j = c - 1; j >= 0; j--){ hanafuda[j] = tmp[j];}
    }
    cout << hanafuda[0] << endl;
  }
  return 0;
}