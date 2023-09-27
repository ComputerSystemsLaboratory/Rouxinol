#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n,p;
  while(1){
    cin >> n >> p;
    int initialp=p;
    if(n==0) return 0;
    vector<int> s(n,0);
    for(int i=0;true;i++){
      if(p==0){
        if(s[i%n]!=initialp){
          p=s[i%n];
          s[i%n]=0;
        }else{
          cout << i%n << endl;
          break;
        }
      }else{
        s[i%n]++;
        p--;
      }
    }
  }
  return 0;
}

