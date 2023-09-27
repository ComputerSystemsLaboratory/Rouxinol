#include <bits/stdc++.h>
using namespace std;
int main(){

  for(;;){
    int n;
    cin>>n;
    if(!n) break;

    int r=0,pre=0,a[2][2]={1,1};
    for(int i=0;i<n;i++){
      string s;
      cin>>s;

      if(s=="lu"){
	a[1][0]=1;
	a[0][0]=0;
      }
      else if(s=="ru"){
	a[1][1]=1;
	a[0][1]=0;
      }
      else if(s=="ld"){
	a[1][0]=0;
	a[0][0]=1;
      }
      else if(s=="rd"){
	a[1][1]=0;
	a[0][1]=1;
      }

      if(pre==0 && a[1][0] && a[1][1]){
	pre=1;
	r++;
      }
      else if(pre==1 && a[0][0] && a[0][1]){
	pre=0;
	r++;
      }

    }
    cout<<r<<endl;

  }
  return 0;

}

