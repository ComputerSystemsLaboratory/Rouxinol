#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sum = 0;
  cin >> n;
  int data[100];
  for(int i = 0;i < n;i++){
    cin >> data[i];
  }
  for(int i = 0;i < n - 1;i++){
    for(int j = 0;j < n - i - 1;j++){
      if(data[j] > data[j + 1]){
	swap(data[j],data[j + 1]);
	sum++;
      }
    }
  }
  for(int i = 0;i < n - 1;i++){
    cout << data[i] << " ";
  }
  cout << data[n - 1] << endl;
  cout << sum << endl;
  return 0;
}