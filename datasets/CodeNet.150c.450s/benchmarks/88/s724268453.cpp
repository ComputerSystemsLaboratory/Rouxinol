#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <map>
using namespace std;

int main(){
  int h,w;
  int i,j;
  int flag;
  while(cin>>h>>w,h|w){
    int taikaku;
    int tmph=1111,tmpw=1111;
    taikaku=h*h+w*w;
    flag=false;
    for(i=1;i<150;i++){
      for(j=1;j<150;j++){
	//if(i==4&&j==8) cout<<"a"<<endl;
	if(i>=j||(i==h&&j==w)) continue;
	if(i*i+j*j==taikaku) {
	  if(h<i){
	    tmph=i;
	    tmpw=j;
	    flag=true;
	    break;
	  }
	}
	else if(i*i+j*j>taikaku&&i*i+j*j<tmph*tmph+tmpw*tmpw) {
	  tmph=i;
	  tmpw=j;
	}
      }
      if(flag) break;
    }
    cout<<tmph<<" "<<tmpw<<endl;
  }
  return 0;
}