#include <iostream>
#define N 1100000
using namespace std;
int sosu[N];
int check(int);
int main(){
  int a,d,n,i,j,out,judge;
  for(i=0;i<N;i++) sosu[i]=1;
  sosu[0]=0;
  sosu[1]=0;
  for(i=0;i<N/2;i++){
    if(sosu[i]==1){
      for(j=i*2;j<N;j+=i){
	sosu[j]=0;
      }
    }
  }
  while(1){
    cin >> a >> d >> n;
    if(a==0&&d==0&&n==0) break;
    j=0;
    while(n){
      if(j==1) out=a;
      out=a+j*d;
      j++;
      judge=check(out);
      if(judge==1){
	n--;
      }
    }
    cout << out << endl;
  }
  return 0;
}
int check(int n){
  if(sosu[n]==1) return 1;
  else return 0;
}