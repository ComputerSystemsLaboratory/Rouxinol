#include <iostream>
#include <vector>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
                                                                   
int main(){
  int r,c;
  //行数r,列数c
  cin >> r >> c;
 int  arr[r+1][c+1];
  REP(i,r){
    REP(j,c){
      if(i==0)
        arr[r][j]=0;
      cin >> arr[i][j];
      arr[r][j] +=arr[i][j];
    }
  }
  int sum =0;
 // int total1[c];
  vector <int> total;
  REP(i,r+1){
    REP(j,c+1){
      if(j==c)
        cout << sum;
      else if(j!=c){
        cout << arr[i][j]<<' ';
        sum+=arr[i][j];
      }
    }
    sum=0;
    cout << endl;
  }
}