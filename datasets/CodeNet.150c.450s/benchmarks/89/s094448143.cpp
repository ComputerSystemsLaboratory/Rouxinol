#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> table(1000001,0);
  table[0]=table[1]=1;
  
  for(int i=4;i<1000001;i+=2)
    table[i]=1;
  for(int i=3;i<1000001;i+=2){
    if(table[i]==0)
      for(int j=i+i;j<1000001;j+=i)
	table[j]=1;
  }
  
  int a,b,n;
  while(scanf("%d%d%d",&a,&b,&n),n+a+b){
    while(n){
      if(a>1000000){
	printf("error\n");
	break;
      }
      if(table[a]==0) n--;
      a+=b;
    }
    printf("%d\n",a-b);
  }
  
  return 0;
}