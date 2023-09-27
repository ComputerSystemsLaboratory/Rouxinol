#include<bits/stdc++.h>
using namespace std;

bool bjudge(int h,int w,int sh,int sw){
  int a=h*h+w*w;
  int b=sh*sh+sw*sw;
  if(a>b){return true;}
  if(a==b && h>sh){return true;}
  return false;
}






int main(){
  while(1){

    
  int h,w;
  cin>>h>>w;
  if(h==0 && w==0){break;}
  int ah=1,aw=pow(h*h+w*w-1,1.0/2)+1;
  pair<int,int> mi;
  mi=make_pair(ah,aw);
  while(1){
    while(bjudge(ah,aw,h,w)){aw--;}
    aw+=1;
    if(ah>=aw){break;}
    if(bjudge(mi.first,mi.second,ah,aw)){mi=make_pair(ah,aw);}
    ah++;
  }

  cout<<mi.first<<" "<<mi.second<<endl;


  }
  
  return 0;
}

