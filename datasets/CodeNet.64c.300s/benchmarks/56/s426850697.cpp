#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  int n,a,b,c;
  cin>>n;
  int y[n],m[n],d[n];
  for(int i=0; i<n;i++){
    cin>>y[i]>>m[i]>>d[i];
    if(y[i]%3==0){
      a=y[i]/3*200+(y[i]-y[i]/3)*195;
      a=a-(11-m[i])*20;
      a=a+d[i];
    }else{
      a=y[i]/3*200+(y[i]-y[i]/3)*195;
      if(m[i]%2==0){
	a=a-(((10-m[i])/2)+1)*19-(((10-m[i])/2)*20);
      }else{
	a=a-(((10-m[i])/2)*20+(10-m[i]-(10-m[i])/2)*19+20);
	  }
    
      a=a+d[i];
    }
      cout<<196471-a<<endl;
  
  }
  return 0;
}