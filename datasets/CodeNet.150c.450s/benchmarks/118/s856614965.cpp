#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    int y,m,d;
    cin>>y>>m>>d;
    int sum=0;
    if(y%3==0){
      sum=201-(m-1)*20-d;
    }else{
      for(int i=m+1;i<=10;i++){
	sum+=19+i%2;
      }
      sum+=20-d+m%2;
    }
    for(int i=y+1;i<1000;i++){
      if(i%3==0){
	sum+=200;
      }else{
	sum+=195;
      }
    }
    cout<<sum<<endl;
  }
}