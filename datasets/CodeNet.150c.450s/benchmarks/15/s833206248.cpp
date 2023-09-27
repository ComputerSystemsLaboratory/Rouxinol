#include <bits/stdc++.h>
using namespace std;
int main(){
  int data[10000];
  int n;
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> data[i];
  }
  int m;
  int hogee;
  int sum = 0;
  cin >> m;
  for(int i = 0;i < m;i++){
    cin >> hogee;
    for(int j = 0;j < n;j++){
      if(data[j] == hogee){sum++;break;}
    }
  }
  cout << sum << endl;
  return 0;
}
			 