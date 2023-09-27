#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int h,w,t,mx,my,mt=10000000;
  while(1){
    mt=100000000;
    cin >> h >> w;
    if(h==0&&w==0)break;
    t=h*h+w*w;
    for(int i=1;i*i<=t;i++){
      for(int j=i+1;j<t;j++){
	if(i*i+j*j>=t){
	  if(i*i+j*j==t&&i<h)continue;
	  if(i*i+j*j==mt)continue;
	  if(i==h&&j==w)continue;
	  mt=min(i*i+j*j,mt);
	  // cout <<i<<" "<<j<<" "<< mt << endl;
	  if(i*i+j*j==mt){
	    mx=j;
	    my=i;
	  }
	  break;
	}
      }
      if(i*i>t)break;
    }
    cout << my << " "<<mx<<endl;
  }
  return 0;
}