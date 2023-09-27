#include <bits/stdc++.h>

using namespace std;

#define MAX_N (1<<17)

class BIT{
public:
  int bit[MAX_N+1],n;
  
  BIT(){
    for(int i = 0 ; i < MAX_N ; i++){
      bit[i] = 0;
    }
  }

  int sum(int i){
    int s = 0;
    while(i > 0){
      s += bit[i];
      i -= i & -i;
    }
    return s;
  }
  
  void add(int i,int x){
    while(i <= n){
      bit[i] += x;
      i += i & -i;
    }
  }
};

int main(){
  int q,com,x,y;
  BIT b;
  cin >> b.n >> q;
  while(q--){
    cin >> com >> x >> y;
    if(com){
      cout << b.sum(y)-b.sum(x-1) << endl;
    }else{
      b.add(x,y);
    }
  }
  return 0;
}