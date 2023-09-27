#include<iostream>
using namespace std;

int main(){
  
  int i,j,k,n,y,m,d,total_days;

  cin >> n;
  while(n>0){
    n--;
    cin >> y >> m >> d;
    total_days=0;
    for(i = y+1; i < 1000; i++){
      if(i%3==0){
	total_days+=200;
      }else{
	total_days+=195;
      }
    }

    for(i = m+1; i <= 10; i++){
      if(y%3==0){
	total_days+=20;
      }else{
      if(i%2==0){
	total_days+=19;
      }else{
	total_days+=20;
      }
      }
    }

    if(y%3==0 || m%2!=0){
      total_days+=20-d+1;
    }else{
      total_days+=19-d+1;
    }


    cout << total_days << endl;

  }
  return 0;
}