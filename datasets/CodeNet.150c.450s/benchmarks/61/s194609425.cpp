#include<iostream>
using namespace std;

int next(int A,int B,int C,int x,int *Y,int N,int frame,int look){
  if(frame>10000){
    cout << -1 << endl;
    return 1;
  }
  
  if(Y[look]==x){
    if(look==N-1){
      cout << frame << endl;
      return 0;
    }
    look++;
  }
  return next(A,B,C,(A*x+B)%C,Y,N,frame+1,look);
}
  

int main(){
  int N,A,B,C,x_1,i;
  int Y[100];
  while(1){
    cin >>N>>A>>B>>C>>x_1;
    if(N+A+B+C+x_1==0){
      break;
    }
    for(i=0;i<N;i++){
      cin >> Y[i];
    }
    next(A,B,C,x_1,Y,N,0,0);
  }
  return 0;
}

