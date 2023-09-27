#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,h;
  int data[110];
  while(1){
    cin >> n >> m >> h;
    if(n == 0 && m == 0 && h == 0) break;
    int sum = 0;
    for(int i=0;i<n;i++){
      cin >> data[i];
      sum += data[i];
    }
    if(data[m-1]==0) {
      cout << "0" << endl;
      continue;
    }
    sum = sum * 100;
    sum = sum * (100-h);
    sum = sum / 100;
    cout << sum / data[m-1] << endl;
  }
}