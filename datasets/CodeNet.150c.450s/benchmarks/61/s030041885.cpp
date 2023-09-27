#include<iostream>
using namespace std;
int N,A,B,C,X;
int Y[100];

int solve(){
  int res=0,p=0;
  while(1){
    if(Y[p]==X)p++;
    if(p==N)return res;
    res++;
    X=(A*X+B)%C;
    if(res>10000)return -1;
  }
  return res;
}

int main(){
  while(1){
    cin>>N>>A>>B>>C>>X;
    if(N==0&&B==0&&C==0&&X==0)break;
    for(int i=0;i<N;i++)cin>>Y[i];
    cout<<solve()<<endl;
  }
  return 0;
}