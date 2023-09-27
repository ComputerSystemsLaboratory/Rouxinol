#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int data[100];
  int v;
  int i;
  for(i = 0;i < n;i++){
    cin >> data[i];
  }
  for(i = 1;i < n;i++){
    v = data[i];
    for(int j = 0;j < n - 1;j++){
      cout << data[j] << " ";
    }
    cout << data[n - 1] << endl; 
    int j = i - 1;
    while(v < data[j] && j >= 0){
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = v;
  }
  for(i = 0;i < n - 1;i++){
    cout << data[i] << " ";
  }
  cout << data[i] << endl;
  return 0;
}