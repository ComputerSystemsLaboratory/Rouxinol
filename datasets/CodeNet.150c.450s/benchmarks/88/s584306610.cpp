#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int h,w,k;
  while(cin>>h>>w){
  int l=h*h+w*w;
  k=0;
  if(h==0 && w==0){return 0;}
  for(int i=h+1;i<w;i++){
    for(int j=w;h<j;j--){
      if(l==i*i+j*j && i<j){
        cout<<i<<" "<<j<<endl;
        k=1;
        i=w;
      }
    }
  }
  
  while (k==0) {
    l++;
    for(h=1;h*h<l/2;h++){
      for(w=sqrt(l);h<w;w--){
        if(l==h*h+w*w && h<w){
          cout<<h<<" "<<w<<endl;
          k=1;
          h=l;
        }
      }
    }
  }
  
  }
  return 0;
}