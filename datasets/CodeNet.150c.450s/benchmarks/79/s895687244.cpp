#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,r;
  while(cin>>n>>r,n+r!=0){
    queue<int> yama;
    queue<int> x;
    queue<int> y;
    queue<int> z;
    for(int i=n;i>=1;i--)
      yama.push(i);
    for(int i=0;i<r;i++){
      int p,c;
      cin>>p>>c;
      for(int i=1;i<=p-1;i++){
	x.push(yama.front());
	yama.pop();
      }
      for(int i=1;i<=c;i++){
	y.push(yama.front());
	yama.pop();
      }
      while(!yama.empty()){
	z.push(yama.front());
	yama.pop();
      }
      while(!y.empty()){
	yama.push(y.front());
	y.pop();
      }
      while(!x.empty()){
	yama.push(x.front());
	x.pop();
      }
      while(!z.empty()){
	yama.push(z.front());
	z.pop();
      }
    }
    cout<<yama.front()<<endl;
  }
  return 0;
}