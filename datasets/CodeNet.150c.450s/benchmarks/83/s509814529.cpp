
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int Nm, Wm;
  cin >> Nm >> Wm;
  int wt[101], vt[101];
  for(int i=1;i<=Nm;i++)
    cin >> vt[i] >> wt[i];
  
  int t[101][10001];
  for(int i=0;i<=100;i++) t[i][0]=0;
  for(int i=0;i<=10000;i++) t[0][i]=0;

  for(int i=1;i<=Nm;i++){
    for(int w=1;w<=Wm;w++){
      if(w>=wt[i]) t[i][w]=max(t[i-1][w],t[i-1][w-wt[i]]+vt[i]);
      else t[i][w]=t[i-1][w];
    }
  }

  cout << t[Nm][Wm] << endl;

  return 0;
}