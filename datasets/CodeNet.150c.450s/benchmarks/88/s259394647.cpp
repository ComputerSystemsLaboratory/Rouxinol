#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int h,w;
  while(cin>>h>>w,h||w){
    int a=h*h+w*w;
    bool hantei=false;
    while(1){
      while(1){
	h++;
	double s=sqrt(a-h*h);
	if(s-(int)s==0&&h*h<(a-h*h)){hantei=true;break;}
	if(a-h*h<1)break;
      }
      //cout<<a<<endl;
      if(hantei){cout<<h<<" "<<sqrt(a-h*h)<<endl;break;}
      a++;
      h=0;
    }
  }
}