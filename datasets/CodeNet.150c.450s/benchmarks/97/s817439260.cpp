#include <iostream>
#include <algorithm>

using namespace std;
int dx[] = {-1,0,1,0},dy[] = {0,1,0,-1};
int x[1000],y[1000];

int main(){
  int n,p,d;


  while(1){
    cin >> n;

    if(n == 0)break;

    int mN,mS,mE,mW;
    mN = mS = mE = mW = 0; 
    x[0] = y[0] = 0;
    for(int i = 1; i < n ; i++ ){
      cin >> p >> d;

      x[i] = x[p] + dx[d];
      y[i] = y[p] + dy[d];

      mN = min(mN,y[i]);
      mS = max(mS,y[i]);
      mE = max(mE,x[i]);
      mW = min(mW,x[i]);
      //     cout << "y[i] "<< y[i]<<endl; 
      //      cout << "mN "<< mN<<"　" <<"mS "<<mS<<endl; 
      //      cout << "mN-mS "<< mN-mS<<endl; 
    }

    cout << mE - mW + 1 << " ";
    cout << mS - mN + 1 << endl;


  }


}