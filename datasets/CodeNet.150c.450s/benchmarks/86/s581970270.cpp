#include <iostream>
using namespace	std;
int main(){
  int n,m,p;
  while(cin >> n >> m >> p && n){
    int	x[100];
    int a=0,d,ans;//all,dividend,answer;                                        
    for(int i=0;i<n;i++){
      cin >> x[i];
      a+=x[i];
    }   
    d=a*100*(100-p)/100;
    if(x[m-1]==0)
      ans = 0;
    else
      ans=d/x[m-1];
    cout << ans << endl;
  }
}