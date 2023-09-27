#include<bits/stdc++.h>
using namespace std;

int N,A,B,C,X;
int Y[100];

int solve()
{
  int ans=0;
  int i=0;

  while(1){
    if(X == Y[i]) i++;
    if(i == N) break;
    X = (A*X+B)%C;
    ans++;
    if(ans > 10000) return -1;
  }
  return ans;
}

int main(){
  
  while(1){  
    cin >> N >> A >> B >> C >> X;
    if(N+A+B+C+X == 0) break;
    
    for(int i=0;i < N;i++){
      cin >> Y[i];
    }
    cout << solve() << endl;
  }
  return 0;
}

