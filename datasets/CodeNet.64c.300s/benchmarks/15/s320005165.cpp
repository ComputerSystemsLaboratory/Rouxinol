#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int main(){
  int n;
  int sum = 0;
  int data[100];
  int minv;
  int m;
  cin >> n;
  for(int i = 0;i < n;++i){
    cin >> data[i];
  }
  for(int i = 0;i < n - 1;i++){
    minv = INF;
    for(int j = i;j < n;j++){
      if(minv > data[j]){
	minv = data[j];
	m = j;
      }
    }
    if(m != i){
      swap(data[m],data[i]);
      sum++;
    }
    cout << data[i] << " ";
  }
  cout << data[n - 1] << endl << sum << endl;
  return(0);
}