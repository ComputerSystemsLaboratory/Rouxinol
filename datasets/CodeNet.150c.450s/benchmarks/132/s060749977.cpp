#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n,p;
  cin >> n >> p;
  vector<int> win;
  while(n){
    vector<int> may(n);
    int cal = p;
    int flag = 1;
  while(flag){
    for(int i = 0; i < n; i++){
      if(cal){
        cal--;
        may[i]++;
        if(may[i] == p){
          win.push_back(i);
          flag = 0;
        }
      }
      else if(may[i]){
        cal = may[i];
        may[i] = 0;
      }
    }
  }
  cin >> n >> p;
}
for(int i = 0; i < win.size();i++)
  cout << win[i] << endl;
}

