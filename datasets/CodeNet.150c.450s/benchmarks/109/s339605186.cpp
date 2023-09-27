#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
  int n;
  cin >> n;
  if(!n) break;
  vector<int> train(24*60*60,0);
  for(int i=0; i<n; i++){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    int from = h*60*60 + m*60 + s;
    scanf("%d:%d:%d",&h,&m,&s);
    int to = h*60*60 + m*60 + s;
    for(int i=from; i<to; i++){
      train[i] ++;
    }
  }
  cout << *max_element(train.begin(),train.end()) << endl;
  }
}