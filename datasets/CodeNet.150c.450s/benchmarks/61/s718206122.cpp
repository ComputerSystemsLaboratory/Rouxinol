#include <iostream>
#define rep(i,k,n) for(int i=k;i<n,i++)
using namespace std;

int main(){
  int n,a,b,c,x,i,j;
  int ylist[150];
  cin>>n>>a>>b>>c>>x;
  while(n){
    for(i=0;i<n;i++)
      cin>>ylist[i];
    j=0;
    for(i=0;i<=10000;i++){
      if(x==ylist[j]) {j++;
	if(j>=n) break;
	 x=(a*x+b)%c;
	continue;
      }
      //      cout <<i<<"deb\n";
      x=(a*x+b)%c;
    }
    if(i>10000) cout<<-1<<endl;
    else cout<<i<<endl;
    cin>>n>>a>>b>>c>>x;
  }
  return 0;
}