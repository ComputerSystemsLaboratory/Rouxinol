#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    int data[86401]={0};
    for(int i=0;i<n;i++){
      int hh1,mm1,ss1;
      int hh2,mm2,ss2;
      int time1,time2;
      scanf("%d:%d:%d %d:%d:%d",&hh1,&mm1,&ss1,&hh2,&mm2,&ss2);
      time1=hh1*3600+mm1*60+ss1;
      time2=hh2*3600+mm2*60+ss2;
      for(int i=time1;i<time2;i++){
	data[i]++;
      }
    }
    int max=0;
    for(int i=0;i<86401;i++){
      max =((max < data[i])?(data[i]):(max));
    }
    cout<<max<<endl;
  }
  return 0;
}