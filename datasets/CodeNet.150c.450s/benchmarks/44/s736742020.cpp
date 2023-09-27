#include "bits/stdc++.h"
using namespace std;

int main() {
  vector<int>a(4);
  vector<int>b(4);
  while(cin >>a.at(0)>>a.at(1)>>a.at(2)>>a.at(3)>>b.at(0)>>b.at(1)>>b.at(2)>>b.at(3)){
    int hit=0;
    int blow=0;
    for(int i=0;i<4;i++){
      if(a.at(i)==b.at(i)){
        hit++;
      }
    }
    if(a.at(0)==b.at(1)){
      blow++;
    }
    if(a.at(0)==b.at(2)){
      blow++;
    }
    if(a.at(0)==b.at(3)){
      blow++;
    }
    if(a.at(1)==b.at(0)){
      blow++;
    }
    if(a.at(1)==b.at(2)){
      blow++;
    }
    if(a.at(1)==b.at(3)){
      blow++;
    }
    if(a.at(2)==b.at(0)){
      blow++;
    }
    if(a.at(2)==b.at(1)){
      blow++;
    }
    if(a.at(2)==b.at(3)){
      blow++;
    }
    if(a.at(3)==b.at(0)){
      blow++;
    }
    if(a.at(3)==b.at(1)){
      blow++;
    }
    if(a.at(3)==b.at(2)){
      blow++;
    }
  cout <<hit<<" "<<blow<<endl;
  }
  return 0;
}

