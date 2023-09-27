#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int main()
{
  while(true){
    int h,w;
    cin>>h>>w;
    if(h==0&&w==0){
      break;
    }

    int minh=150;
    int minw=150;
    bool flag=false;
    rep(i,1,151){
      rep(j,i+1,151){
        if(i*i+j*j==h*h+w*w){
          if(i>h){
            minh=i;
            minw=j;
            flag=true;
          }
        }else if(i*i+j*j>h*h+w*w){
          if(minh*minh+minw*minw>i*i+j*j){
            minh=i;
            minw=j;
          }
        }
      }
      if(flag==true){
        break;
      }
    }

    cout<<minh<<" "<<minw<<endl;
  }

  return 0;
}