#include<iostream>
using namespace std;

int taxx(int p,int x){
  return p*(100+x)/100;
}
int taxy(int p,int y){
  return p*(100+y)/100;
}

int main(){
  int i,j;
  int p1,p2,x,y,s;
  int max;
  int p3,p4;

  while(1){
    p3=0;
    p4=0;
    max=-1;
    cin >> x >> y >> s;
    if(x==0 && y==0 && s==0)break;
    for(i=1;i<=s/2;i++){
      for(j=1;j<=s-1;j++){
	p1=taxx(i,x);
	p2=taxx(j,x);
	if(p1+p2==s){
	  p1=taxy(i,y);
	  p2=taxy(j,y);
	if(p1+p2>max){
	  max=p1+p2;
	}
      }
    }
    }
    cout << max << endl;
  }
}