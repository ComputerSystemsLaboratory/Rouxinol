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
    return;
  }
};
int main(){
  dice d;
  string vec;
  for(int i=0;i<6;i++){
    cin>>d.d[i];
  }
  cin>>vec;
  for(int i=0;i<vec.size();i++){
    d.rotate(vec[i]);
  }
  cout<<d.d[0]<<endl;
  return 0;
}

