#include <iostream>
#include <utility>
using namespace std;
int a,b,n;
pair<int,int> p[40];
int f(int x,int y){
  if(x==a&&y==b) return 1;
  else if(x>a||y>b) return 0;
  for(int i=0;i<n;++i) if(x==p[i].first&&y==p[i].second) return 0;
  return f(x+1,y)+f(x,y+1);
}

int main(){
  int x,y,A;
  while(cin>>a>>b,a||b){
    cin>>n;
    for(int i=0;i<n;++i){
      cin>>x>>y;
      pair<int,int> q(x,y);
      p[i]=q;
    }
    A=f(1,1);
    cout<<A<<endl;
  }
  return 0;
}