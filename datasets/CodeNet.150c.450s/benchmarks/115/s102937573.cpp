#include <iostream>
#include <string>

using namespace std;

//L[i][j] X[0]..X[i]??¨X[0]..Y[j]???LCS
int L[1001][1001]={};
int main(){
  int testnum;
  cin>>testnum;
  for(int t=0;t<testnum;++t){
    string X,Y;
    cin>>X>>Y;

    for(int i=1;i<=X.length();++i){
      for(int j=1;j<=Y.length();++j){
        if(X[i-1]==Y[j-1])
          L[i][j] = 1 + L[i-1][j-1];
        else
          L[i][j] = max(L[i][j-1],L[i-1][j]);
      }
    }

    cout << L[X.length()][Y.length()] << endl;
  }

  return 0;
}