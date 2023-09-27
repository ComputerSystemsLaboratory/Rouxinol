#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int main()
{
  int n;
  cin>>n;

  rep(i,0,n){
    int Y,M,D;
    int count=0;
    cin>>Y>>M>>D;

    while(!(Y==1000&&M==1&&D==1)){
      count++;
      if(Y%3==0){
        D++;
        if(D>20){
          D=1;
          M++;
        }
      }else{
        D++;
        if(M%2==1){
          if(D>20){
            D=1;
            M++;
          }
        }else{
          if(D>19){
            D=1;
            M++;
          }
        }
      }
      if(M>10){
        M=1;
        Y++;
      }
    }

    cout<<count<<endl;
  }

  return 0;
}