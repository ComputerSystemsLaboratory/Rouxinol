#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int num[102]={},N=0,mini,cnt=0;
  
  cin >> N;
  
  for(int i = 0; i < N; i++){
    cin >> num[i];
  }
  
  for(int i = 0; i < N; i++){
    mini = i;
    for(int j = i; j < N; j++){
      if(num[j] < num[mini]) 	mini = j;
    }
    swap(num[i],num[mini]);
    if(num[i] < num[mini])    cnt++;
  }
  
  for(int i = 0; i < N; i++){
    cout << num[i];
    if(i != N-1) cout << " ";
  }
  cout << endl << cnt <<endl;

  return 0;
}