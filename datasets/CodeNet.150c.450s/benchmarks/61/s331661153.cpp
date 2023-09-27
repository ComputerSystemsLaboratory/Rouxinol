#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int N,A,B,C,X;
  vector<int> y;
  while(1){
    int flag=0,index=0;
    cin>>N>>A>>B>>C>>X;
    if(N==0)
      break;
    y.resize(N);

    for(int i=0;i<N;i++){
      cin>>y[i];
    }

    for(int i=0;i<=10000;i++){
      if(X==y[index]){
        if(index==N-1){
          flag=1;
          cout<<i<<endl;
          break;
        }
        index++;
      }
      X=(A*X+B)%C;
    }

    if(flag==0)
      cout<<-1<<endl;
  }
}

