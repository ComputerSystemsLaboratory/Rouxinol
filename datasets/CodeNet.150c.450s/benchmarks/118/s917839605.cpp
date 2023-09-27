#include <iostream>
#include <vector>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int solve(int Y,int M,int D)
{
  return (Y-1)/3*200+((Y-1)-(Y-1)/3)*195+(M-1)*20-((Y%3==0)?0:(M-1)/2)+D;
}

int main()
{
  int n;
  cin>>n;

  int temp=solve(1000,1,1);

  rep(i,0,n){
    int Y,M,D;
    cin>>Y>>M>>D;
    cout<<temp-solve(Y,M,D)<<endl;
  }

  return 0;
}