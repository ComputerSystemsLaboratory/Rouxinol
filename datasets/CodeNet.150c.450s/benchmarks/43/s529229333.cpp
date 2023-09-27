#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  int n;
  while(1){
    cin>>n;
    if(!n)break;
    int a,b;
    int apoint=0,bpoint=0;
    rep(i,n){
      cin>>a>>b;
      if(a==b){
	apoint+=a;
	bpoint+=b;
      }else if(a>b){
	apoint+=(a+b);
      }else{
	bpoint+=(a+b);
      }
    }
    cout<<apoint<<" "<<bpoint<<endl;
  }
  return 0;
}