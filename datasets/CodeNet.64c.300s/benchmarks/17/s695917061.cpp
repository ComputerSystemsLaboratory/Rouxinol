#include<iostream>
#include<cmath>
using namespace std;
int before,after,sum;

int calc(int x){
  double a;
  a=x*100.0/(100+before);
  int b;
  b=ceil(a);
  if((int)(b*(100.0+before)/100) != x)return -1;
     double c=b*(100.0+after)/100;
     return (int)c;
}

int main(){
  while(cin>>before>>after>>sum,sum){
    int max=0;
    int a;
    for(int i=1;i<sum;i++){
      int tmp1,tmp2;
	tmp1=calc(i);
	tmp2=calc(sum-i);
	if(tmp1+tmp2>max)max=tmp1+tmp2;
    }
    cout << max << endl;
  }
  return 0;
}