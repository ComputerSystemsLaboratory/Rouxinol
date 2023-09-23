#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n, m;
  int cnt[101] = {0};

  while(cin >> n){
    cnt[n]++;
  }
  
  m = *max_element(cnt+1, cnt+101);

  for(int i=1; i<101; i++){
    if(cnt[i] == m){
      cout << i << endl;
    }
  }

  return 0;
}