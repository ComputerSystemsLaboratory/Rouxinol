#include<iostream>
using namespace std;

int solve(int n,int p){
  int stones[100];
  fill(stones,stones+100,0);
  int cnt = 0;
  int haveStoneMan = 0;
  while(true){
    if (p > 0){
      if(stones[cnt] == 0)haveStoneMan++;
      stones[cnt] += 1;
      p--;
      if(p == 0 && haveStoneMan == 1){
        return cnt;
      }
    }else{
      if(stones[cnt] > 0)haveStoneMan--;
      p = stones[cnt];
      stones[cnt] = 0;
    }
    cnt = (cnt+1) % n;
  }
}


int main(){
  int a,b;
  while(true){
    cin >> a >> b;
    if(a == 0 && b == 0)break;
    cout << solve(a,b) << endl;
  }
}