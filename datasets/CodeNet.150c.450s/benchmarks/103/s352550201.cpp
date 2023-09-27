//Sum of Integers
#include<bits/stdc++.h>
using namespace std;

int depth, s, n;

void solve(int d, int x, int sum){
  if(d==0 && sum==s){n++; return;}
  for(int i=x+1; i<10; i++){
    solve(d-1, i, sum+i);
  }
}

int main(){

  while(cin>>depth>>s){
    if(depth==0 && s==0)break;
    n=0;
    solve(depth, -1, 0);
    cout<<n<<endl;
  }
  return 0;
}