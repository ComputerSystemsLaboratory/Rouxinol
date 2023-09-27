#include <bits/stdc++.h>
using namespace std;
const char INF = '9' + 1;
int main(){
  int n;
  string data[50];
  string temp[50];
  string tmp;
  string junban[10];
  char minv;
  int m;
  int p[10] = {0};
  int i,j;
  cin >> n;
  for(i = 0;i < n;i++){
    cin >> data[i];
    temp[i] = data[i];
    junban[temp[i][1] - '0'] += temp[i][0];
  }
  
  for(i = 0;i < n - 1;i++){
    for(j = 0;j < n - i - 1;j++){
      if(temp[j][1] > temp[j + 1][1])swap(temp[j],temp[j + 1]);
    }
  }
  for(i = 0;i < n - 1;i++){
    cout << temp[i] << " ";
  }
  cout << temp[i] << endl;
  for(i = 0;i < n;i++){
    if(junban[temp[i][1] - '0'][p[temp[i][1] - '0']] != temp[i][0]){
      cout << "Not stable" << endl;
      break;
    }
    p[temp[i][1] - '0']++;
  }
  if(i == n)cout << "Stable" << endl;
  for(i = 0;i < 10;i++){
    p[i] = 0;
  }
  for(i = 0;i < n - 1;i++){
    minv = INF;
    for(j = i;j < n;j++){
      if(minv > data[j][1]){
	minv = data[j][1];
	m = j;
      }
    }
    swap(data[i],data[m]);
    cout << data[i] << " ";
  }
  cout << data[i] << endl;
  for(i = 0;i < n;i++){
    if(junban[data[i][1] - '0'][p[data[i][1] - '0']] != data[i][0]){
      cout << "Not stable" << endl;
      break;
    }
    p[temp[i][1] - '0']++;
  }
  if(i == n)cout << "Stable" << endl;
  return 0;
}