#include<iostream>

using namespace std;
const int MAX = 10e4;
// 入力
int N,x;

bool prime[MAX];
int ans;
bool flag;
void init(){
  for(int i=0;i<MAX;i++)prime[i]=true;
  prime[0]=prime[1]=false;
  for(int i=2;i<MAX;){
    if(prime[i]){
      for(int j=2*i;j<MAX;j+=i)prime[j]=false;
    }
    if(i==2)i++;
    else i+=2;
  }
}

int main(){
  cin >> N;
  ans = 0;
  init();
  while(N--){
    cin >> x;
    if(x < MAX){
      if(prime[x])ans++;
    } else {
      if(x%2!=0){
        flag = true;
        for(int i=3;i<MAX;i+=2){
          if(x%i==0){
            flag = false;
            break;
          }
        }
        if(flag)ans++;
      }
    }
  }
  cout << ans << endl;
}