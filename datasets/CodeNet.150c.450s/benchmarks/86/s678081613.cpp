#include <iostream>
using namespace std;

int main(){
     int N,M,P;
     while(cin>>N>>M>>P,N||M||P){
	  int win=0,sum=0;
	  for(int i=0;i<N;i++){
	       int num;
	       cin>>num;
	       if(i==M-1) win=num;
	       sum+=num;
	  }
	  if(win==0){
	       cout<<0<<endl;
	  }else{
	       cout<<sum*(100-P)/win<<endl;
	       //cout<<sum<<" "<<P<<" "<<win<<endl;
	  }
     }
}