#include<iostream>
using namespace std;
int main()
{
  int N,A,B,C,X;
  while(cin>>N>>A>>B>>C>>X&&N){
    int Y[N];
    for(int i = 0; i < N; ++i){
      cin >> Y[i];
    }
    int x=X;
    int frame=0;
    int now_reel=0;
    while(true){
      if(x==Y[now_reel])++now_reel;
      if(now_reel==N)break;
      ++frame;
      if(frame>10000){
	frame=-1;
	break;
      }
      x=(A*x+B)%C;
    }
    cout<<frame<<endl;
  }
  return 0;
}