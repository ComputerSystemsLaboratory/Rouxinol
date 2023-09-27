#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin >> n >> m;

//行列の読み込み
vector< vector<int> > data(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> data.at(i).at(j);
    }
  }

//ベクトルの読み込み
int v[m];
for( int j = 0; j < m; j++){
  cin >> v[j];
}

//結果の出力
 for( int i = 0; i < n; i++){
    int sum = 0;
  for(int j = 0; j < m; j++){
     sum += data.at(i).at(j) * v[j];
    }
    cout << sum << endl;
  }
return 0;
}


