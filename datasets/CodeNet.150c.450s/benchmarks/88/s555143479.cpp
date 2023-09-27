//Integral Rectangles
#include<bits/stdc++.h>
using namespace std;

#define INF 500

//a < b ならtrue
bool comp(int ah, int aw, int bh, int bw){
  if(ah*ah+aw*aw == bh*bh+bw*bw)
    if(ah<bh)return true;
    else return false;
  if(ah*ah+aw*aw < bh*bh+bw*bw)return true;
  return false;
}

int main(){
  int h, w;
  while(true){
    cin>>h>>w;
    if(h==0&&w==0)break;
    int mini=INF*INF, mini_h=INF, mini_w=INF;
    for(int i=1; i*i+1<=h*h+w*w; i++){
      for(int j=i+1; ; j++){
        //      cout<<i<<" "<<j<<endl;
        if(comp(h, w, i, j)){
          if(comp(i, j, mini_h, mini_w)){
            mini=i*i+j*j; mini_h=i; mini_w=j;
          }
          break;
        }
      }
    }
    cout<<mini_h<<" "<<mini_w<<endl;
  }
  return 0;
}