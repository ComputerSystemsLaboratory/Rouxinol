#include<iostream>
using namespace std;
void mksosu();
int so[1000001];
int main(){
  mksosu();
  while(1){
    int a,d,n,c;
    cin >> a >> d >> n;
    if(a==0&&d==0&&n==0)break;  
    c=0;
    for(int i=a;i<1000001;i+=d){
      if(so[i]==1){
	c++;
	if(c==n)cout << i << endl;
      }
    }
  }
  return 0;
}
void mksosu(){
  int flag=0;
  so[2]=1;
  for(int i=2;i<1000001;i++){
    flag=0;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
	flag=1;
	break;
      }
    }
    if(flag==0)so[i]=1;
  }
}