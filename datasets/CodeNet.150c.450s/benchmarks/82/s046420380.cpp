#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

struct dice{
  int u,n,e,s,w,d;
};

int main(){

  srand((unsigned)time(NULL));

  dice d;
  dice d2;
  int tmp;
  int q,a,b;
  int rn;

  cin>>d.u>>d.s>>d.e>>d.w>>d.n>>d.d;
  cin>>q;
  d2=d;
  for(int i=0;i<q;i++){
    cin>>a>>b;
    while(1){
      rn=rand()%4;
      if(rn==0){
	tmp=d.u;
	d.u=d.s;
	d.s=d.d;
	d.d=d.n;
	d.n=tmp;
      }
      else if(rn==1){
	tmp=d.u;
	d.u=d.w;
	d.w=d.d;
	d.d=d.e;
	d.e=tmp;
      }
      else if(rn==2){
	tmp=d.u;
	d.u=d.n;
	d.n=d.d;
	d.d=d.s;
	d.s=tmp;
      }
      else if(rn==3){
	tmp=d.u;
	d.u=d.e;
	d.e=d.d;
	d.d=d.w;
	d.w=tmp;
      }
      if(d.u==a&&d.s==b){
	cout<<d.e<<endl;
	break;
      }
    }
    d=d2;
  }
}