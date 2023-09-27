#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n, a, b, c, x, y[100];

  while(cin>>n>>a>>b>>c>>x, n){
    for(int i=0;i<n;i++) cin>>y[i];

    int id=0;
    bool f=true;
    for(int i=0;i<=10000;i++){
      if(y[id]==x) id++;
      if(id==n){
	cout<<i<<endl;
	f=false;
	break;
      }
      x=(a*x+b)%c;
    }
    if(f) cout<<-1<<endl;
  }
  
  return 0;
}