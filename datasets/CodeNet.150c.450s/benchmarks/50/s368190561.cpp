#include <bits/stdc++.h>
using namespace std;
int main() {
  for(int N; cin>>N&&N;){
    int n=1000, a=0;
    while(1) {
      if(n-500>=N) n-=500,a++;
      else if(n-100>=N) n-=100,a++;
      else if(n-50>=N) n-=50,a++;
      else if(n-10>=N) n-=10,a++;
      else if(n-5>=N)n-=5,a++;
      else if(n-1>=N)n--,a++;
      else break;
    }cout <<a<<endl;
  }
  return 0;
}