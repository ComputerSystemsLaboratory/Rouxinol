#include<iostream>
#include<algorithm>
using namespace std;
int t[6],mx[6],mn[6],judge[1000000],n,A,MN,MX,L,cnt,ans;
void split(int A){
  for(int i=0;i<6;i++)t[i]=0;
  for(int i=L-1;i>=0;i--){
    t[i]=A%10;
    A/=10;
  }
}
int get(int t[]){
  int a=0,b=1;
  for(int i=L-1;i>=0;i--){
    a+=b*t[i];
    b*=10;
  }
  return a;
}
int main(){
  
  while(1){
    cin>>A>>L;
    if(A==0&&L==0)break;
    cnt=0;
    for(int i=0;i<1000000;i++)judge[i]=-1;
    while(1){
      if(judge[A]>=0){
	ans=cnt-judge[A];
	cout<<judge[A]<<' '<<A<<' '<<ans<<endl;
	break;
      }
      judge[A]=cnt;
      cnt++;
      split(A);
      for(int i=0;i<6;i++)mx[i]=mn[i]=t[i];
      sort(mx,mx+L);
      reverse(mx,mx+L);
      sort(mn,mn+L);
      MN=get(mn);
      MX=get(mx);
      A=MX-MN;
      //cout<<MN<<endl<<MX<<endl<<A<<endl;
      /*
	for(int i=0;i<6;i++)cout<<mx[i]<<' ';
	cout<<endl;
	for(int i=0;i<6;i++)cout<<mn[i]<<' ';
	cout<<endl;*/
      
    }
  }
  return 0;
}