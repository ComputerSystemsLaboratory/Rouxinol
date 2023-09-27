#include <iostream>

using namespace std;


int n,s;

int count;

void dfs(int i,int j,int sum) {

  //cout << i << " " << j << " " << sum << endl;

  if(j==0 && sum==0) {

    count++;

    return;

  }

  if(i==10 || j==0) return;

  dfs(i+1,j-1,sum-i);

  dfs(i+1,j,sum);

  return;

}
  

int main() {

  while(cin >> n >> s) {

    if(n==0 && s==0) break;

    count=0;

    dfs(0,n,s);

    cout << count << endl;

  }

  return 0;

}