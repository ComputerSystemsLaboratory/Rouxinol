#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int w,h;
  while(cin>>h>>w,w||h){
    int minh=150,minw=150;
    for(int i=150;i>0;--i){
      for(int j=150;j>i;--j){
        if(i*i+j*j>w*w+h*h || (i*i+j*j==w*w+h*h && h<i)){
          if(i*i+j*j<minw*minw+minh*minh || (i*i+j*j==minw*minw+minh*minh && minh>i)){
            minh=i;minw=j;
          }
        }
      }
    }
    cout<<minh<<" "<<minw<<endl;
  }
  return 0;
}