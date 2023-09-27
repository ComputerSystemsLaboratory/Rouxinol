#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;
    vector<int>triangle(3);
    for(int i = 0; i < N; i++){
      for(int j = 0; j < 3; j++){
        cin >> triangle.at(j);
      }
      sort(triangle.begin(), triangle.end());

      int A, B, C;

      A = triangle.at(0);
      B = triangle.at(1);
      C = triangle.at(2);

      if(A * A + B * B == C * C){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
}

