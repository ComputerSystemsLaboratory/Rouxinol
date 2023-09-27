#include <iostream>
using namespace std;
int main(){
  int a,b,n;
  int i;
  int ans=0,ans1=0;
  while(1){
    cin >> n;
    if(n==0)break;
    for(i=0;i<n;i++){
      cin >> a >> b;
      if(a>b){
	ans=ans+a+b;
      }
      else if(a<b){
	ans1=ans1+a+b;
      }
      else{
	ans+=a;
	ans1+=b;
      }
    }
    cout << ans << ' ' << ans1 << endl;
    ans=0;
    ans1=0;
  }
}