#include<iostream>

#define rep(i,j) for(i=0;i<(j);i++)
#define rep_to_(i,j,k) for(i=j;i<=(k);i++)

#define MAXLEN 150
using namespace std;

int main(){
  int h,w;
  while(true){
    cin >> h>>w;
    if(h==0 && w==0)break;
    int len;
    len=h*h+w*w;

    int hi,wj,min=150*150*2,ah,aw,hp,wp,poh,lenp;

    rep_to_(hi,1,MAXLEN){
      poh=hi*hi;

      rep_to_(wj,hi+1,MAXLEN){
        lenp=poh+wj*wj;
        if(lenp>len && min>lenp){
          min=lenp;
          ah=hi;
          aw=wj;
          break;
        }
        else if(lenp==len && hi>h){
          min=lenp;
          ah=hi;
          aw=wj;
          goto OUT;
        }
      }
    }
  OUT:cout << ah<<" "<<aw<<endl;
  }
}