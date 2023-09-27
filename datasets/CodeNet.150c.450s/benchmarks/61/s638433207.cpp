#include<iostream>
using namespace std;
 
int main()
{
  int N,A,B,C,X,Y,y,f;
  while(cin>>N>>A>>B>>C>>X,N||A||B||C||X){
    f=0;
y=-1;
    while(N-->0){
      cin>>Y;
if(Y==y){X=(A*X+B)%C;f++;}
      while(X!=Y&&f<10001){
        X=(A*X+B)%C;
        f++;
      }
y=Y;
    }
    if(f>10000)f=-1;
    cout<<f<<endl;
  }
}