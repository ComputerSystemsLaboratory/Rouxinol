#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, r;
  cin >> n >> r;

  int p, c;
  while(n != 0 && r != 0){
    vector<int> v(n);
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
      v[i] = n - i;
    }

    for(int i = 0; i < r; i++){
      cin >> p >> c;
      p--;

      for(int j = 0; j < n; j++){
        v1[j] = v[j];
      }

      for(int j = 0; j < c; j++){
        v[j] = v1[p + j];
      }

      for(int j = c; j < p + c; j++){
        v[j] = v1[j - c];
      }
        
      for(int j = 0; j < n; j++){
        //cerr << v[j] << " ";
      }
      //cerr << endl;
    }
    cout << v[0] << endl;
    cin >> n >> r;
  }

}