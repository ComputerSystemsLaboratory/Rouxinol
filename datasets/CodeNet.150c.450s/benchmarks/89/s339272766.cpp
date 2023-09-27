#include<iostream>
using namespace std;

int main(){
  int i,j,a,d,n;
  int num[1000000];
  for(i = 1; i < 1000000; i++){
    num[i]=0;
  }
  num[1]=1;
    for(i = 2; i < 1000000; i++){
      if(num[i]==0){
	for(j = 2*i; j <1000000; j+=i){
	  num[j]=1;
	}
      }
    }

  while(1){
    int count=0;
    int memo;
    cin >> a >> d >> n;
    if(a==0 && d==0 && n==0)break;
         
    for(i = a; i <1000000; i+=d){
      if(num[i]==0){
	count++;
      }
      if(count==n){
	memo=i;
	break;
      }
    }
    cout << memo << endl;
  }
  
  return 0;
}