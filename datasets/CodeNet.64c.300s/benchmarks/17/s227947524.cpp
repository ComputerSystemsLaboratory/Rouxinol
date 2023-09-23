#include<iostream>

using namespace std;
  
int main(){

  int ans;
  int x,y,s;

  while(1){

    cin>>x>>y>>s;
    if(x==0&&y==0&&s==0) break;

    ans=0;
    for(int i=1;i<s;i++){
      for(int j=i;j<s;j++){
	if(i*(x+100)/100+j*(x+100)/100==s){
	  if(ans<i*(y+100)/100+j*(y+100)/100){
	    ans=i*(y+100)/100+j*(y+100)/100;
	  }
	}
      }
    }
    cout<<ans<<endl;
  }

}