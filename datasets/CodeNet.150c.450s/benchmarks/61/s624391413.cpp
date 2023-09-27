#include<iostream>
#include<queue>
using namespace std;

int main(){
  int a,b,c,x,n,t,frame=0;

  while(1){
    cin>>n>>a>>b>>c>>x;
    if(!(n||a||b||c||x))break;
    queue<int> q;

    for(int i=0; i<n; i++){
      cin>>t;
      q.push(t);
    }

    t=0;
    while(!q.empty()){
      if(frame > 10000) {
	frame=0;
	break;
      }

      if(x==q.front()) {
	q.pop();
	//cout<<x<<" "<<frame<<endl;
      }
      x=(a*x+b)%c;
      frame++;
    }

    cout<<frame-1<<endl;
    frame=0;
  }
}