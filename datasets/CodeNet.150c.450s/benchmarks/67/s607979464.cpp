#include<iostream>

using namespace std;

int main(){
  int n;

  while(cin>>n,n){
    int cnt=0;
    for(int i=1;i<n;++i){
      bool flag=false;
      int total=i;
      for(int j=i+1;j<n;++j){
	total+=j;
	if(total==n){
	  cnt++;
	  if(j==i+1){
	    flag=true;
	    break;
	  }
	}
	else if(total>n){
	  break;
	}
      }
      if(flag==true)
	break;
    }
    cout<<cnt<<endl;
  }
}