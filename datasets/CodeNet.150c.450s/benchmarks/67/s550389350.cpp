#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  int ans = 0;
  int count = 0;
  vector<int> anss;
  cin >> N;
  while(N){
    int i = 1;
    while( i <= N/2 ){
      int j = i;
      while(ans < N){
        ans += j;
        if(ans == N) count++;
        j++;
      }
      i++;
      ans = 0;
    }
    anss.push_back(count);
    count = 0;
    cin >>  N;
  }
  for(int j = 0; j < anss.size(); j++){
    cout << anss[j] << endl;
  }
}

