#include<iostream>
using namespace std;
int n,y,m,d,endD,cnt;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>y>>m>>d;
    cnt=0;
    while(1){
      if(y==1000&&m==1&&d==1)break;
      cnt++;
      d++;
      if(y%3==0||m%2==1){
	endD=20;	
      }else{
	endD=19;
      }
      if(d>endD){
	d=1;
	m++;
      }
      if(m>10){
	m=1;
	y++;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}