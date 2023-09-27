#include<bits/stdc++.h>
using namespace std;
class dice{
public:
  int d[6];
  void rotate(char a){
    if(a=='N'){
      int top=d[0];
      d[0]=d[1];
      d[1]=d[5];
      d[5]=d[4];
      d[4]=top;
    }
    else if(a=='S'){
      int top=d[0];
      d[0]=d[4];
      d[4]=d[5];
      d[5]=d[1];
      d[1]=top;
    }
    else if(a=='E'){
      int top=d[0];
      d[0]=d[3];
      d[3]=d[5];
      d[5]=d[2];
      d[2]=top;
    }
    else if(a=='W'){
      int top=d[0];
      d[0]=d[2];
      d[2]=d[5];
      d[5]=d[3];
      d[3]=top;
    }
    else if(a=='R'){
      rotate('N');
      rotate('E');
      rotate('S');
    }
    else if(a=='L'){
      rotate('N');
      rotate('W');
      rotate('S');
    }
    return;
  }
  void rotate2(int t,int f){
    int i;
    for(i=0;i<6;i++) if(d[i]==t) break;
      if(i==1) rotate('N');
      else if(i==2) rotate('W');
      else if(i==3) rotate('E');
      else if(i==4) rotate('S');
      else if(i==5) rotate('S'),rotate('S');

      for(i=1;i<5;i++) if(d[i]==f) break;
      if(i==2) rotate('L');
      else if(i==3) rotate('R');
      else if(i==4) rotate('R'),rotate('R');

      return;
  }
};
int main(){
  dice d;
  int q,t,f;
  for(int i=0;i<6;i++){
    cin>>d.d[i];
  }
  cin>>q;
  for(int j=0;j<q;j++){
    cin>>t>>f;
    d.rotate2(t,f);
    cout<<d.d[2]<<endl;
  }
  return 0;
}

