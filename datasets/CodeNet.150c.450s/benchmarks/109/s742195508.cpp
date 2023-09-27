#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   
  char ch;
  int ta[200000];
  int n,a,b,c,time,mx,cnt;
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n*2;i++){
      cin>>a>>ch>>b>>ch>>c;
      time=a*100000+b*1000+c*10;
      //cout<<time<<endl;
      if(i%2==0)time+=1;
      ta[i]=time;
    }
    sort(ta,ta+n*2);
    mx=cnt=0;
    for(int i=0;i<n*2;i++){
      if(ta[i]%10){
    cnt++;
      }else{
    cnt--;
      }
      if(mx<cnt)mx=cnt;
    }
    cout<<mx<<endl;
  }
  return 0;
}