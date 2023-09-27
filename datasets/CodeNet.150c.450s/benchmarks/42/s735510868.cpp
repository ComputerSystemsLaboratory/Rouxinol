#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
  int n,q,t[100000],N,S=0;
  string A,name[100000];
  queue<string> Q1,Q3;
  queue<int> Q2,Q4;
  cin>>n>>q;
  for(int i=1;i<n+1;i++){
    cin>>name[i]>>t[i];
    Q1.push(name[i]);
    Q2.push(t[i]);
  }
  while(Q1.empty()==0){

    A=Q1.front();
    Q1.pop();
    N=Q2.front();
    Q2.pop();

    if(N<q+1){
      S+=N;
      Q3.push(A);
      Q4.push(S);
    }

    else{
      S+=q;
      Q1.push(A);
      N-=q;
      Q2.push(N);
    }
  }
  for(int i=1;i<n+1;i++){
    cout<<Q3.front()<<" "<<Q4.front()<<endl;
    Q3.pop();
    Q4.pop();
  }
}