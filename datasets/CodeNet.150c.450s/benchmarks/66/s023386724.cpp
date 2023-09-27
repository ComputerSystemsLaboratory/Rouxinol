#include <iostream>
#include <string>
using namespace	std;
int main(){

  string a[256],b;
  bool tf=0,c=0;
  int i,j,n,m;

  cin>>n;
  for(i=0;i<n;i++) cin>>a[i];
  cin>>m;
  for(i=0;i<m;i++){
    cin>>b;
    for(j=0;j<n;j++){
      if(a[j]==b){
        if(tf==0){
          cout<<"Opened by "<<b<<endl;
          tf=1;
	}
        else{
          cout<<"Closed by "<<b<<endl;
          tf=0;
	}
        c=1;
        break;
      }
    }
    if(c==0) cout<<"Unknown "<<b<<endl;
    c=0;

  }

  return 0;

}