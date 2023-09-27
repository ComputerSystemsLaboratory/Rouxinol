#include<iostream>
using namespace std;

int main(){
  int x,y,s,i,j;
  while(1){
  cin >> x >> y >>s;
  if(x==0 && y==0 && s==0)break;
  int total;
  int max=-1;
 
  int ans;
  for(i = 1; i < 1000; i++){
    for(j = 1; j < 1000; j++){
      total = i*(100+x)/100+j*(100+x)/100;
      if(total==s){
	ans = i*(100+y)/100+j*(100+y)/100;
	if(max<ans)max=ans;
      }
    }
  }
    cout << max << endl;
 
    
  }

  return 0;
}