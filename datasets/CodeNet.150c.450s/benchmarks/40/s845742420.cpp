#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

class dice{
  int* me;
public:
  dice(int me_[6]){
    me = me_;
  }
  int Top(){
    return me[0];
  }
  void East(){
    swap(me[0], me[3]);
    swap(me[3], me[5]);
    swap(me[5], me[2]);
  }
  void West(){
    swap(me[0], me[2]);
    swap(me[2], me[5]);
    swap(me[5], me[3]);
  }
  void North(){
    swap(me[0], me[1]);
    swap(me[1], me[5]);
    swap(me[5], me[4]);
  }
  void South(){
    swap(me[0], me[4]);
    swap(me[4], me[5]);
    swap(me[5], me[1]);
  }
};


int main(){ _;
  int me[6];
  REP(i,6) cin>>me[i];
  dice d{me};
  char c;
  while(cin>>c){
    if(c=='E'){
      d.East();
    }else if(c=='W'){
      d.West();
    }else if(c=='N'){
      d.North();
    }else if(c=='S'){
      d.South();
    }
  }
  cout<<d.Top()<<endl;
}