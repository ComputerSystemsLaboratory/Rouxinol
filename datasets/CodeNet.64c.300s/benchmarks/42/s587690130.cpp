#include "algorithm"
#include "iostream"
#include "cmath"
#include "string"
#include "map"
using namespace std;

const char dir[4]={'N','E','S','W'};
int x[20],y[20];
int nx,ny,cnt;

void find(char d,int I,int N){
int a=-1;
  for(int i=0;i<4;++i){
    if(dir[i]==d)a=i;
  }
  for(int i=0;i<I;++i){
    if(a==0)ny+=1;
    if(a==1)nx+=1;
    if(a==2)ny-=1;
    if(a==3)nx-=1;
    for(int j=0;j<N;++j){
      if(x[j]==nx && y[j]==ny){
        ++cnt;
        x[j]=-1;
        y[j]=-1;
        break;
      }
    }
  }
}

int main(){
  while(true){
    int N,M,I;
    cnt=0;
    nx=10;
    ny=10;

    char d;
    cin >> N;
    if(!N)break;
    for(int i=0;i<N;++i){
      cin >> x[i] >> y[i];
    }
    cin >>M;
    while(M--){
      cin >> d >> I;
      find(d,I,N);
    }
    if(cnt==N)cout << "Yes" <<endl;
    else cout << "No" <<endl;
  }
  return 0;
}