#include <bits/stdc++.h>

using namespace std;

bool flag;
int a[10];

void dfs(int ap, int b, int c){
 
  if(!ap){
    flag = true;
    return;
  }
  else{
    if(a[10 - ap] > b){
      return dfs(ap - 1, a[10 - ap], c); 
    }
    else if(a[10 - ap] > c){
      return dfs(ap - 1, b, a[10 - ap]); 
    }
    else{
      return;
    }
  }

}

int main(){

  int n;

  cin >> n;

  for(int i = 0; i < n; ++i){
    
    flag = false;
    
    for(int j = 0; j < 10; ++j){
      cin >> a[j];
    }
    
    dfs(10, 0, 0);

    cout << (flag ? "YES" : "NO") << endl;

  }

}