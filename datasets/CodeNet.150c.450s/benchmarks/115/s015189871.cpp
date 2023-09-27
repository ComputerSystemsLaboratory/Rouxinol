#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void lcs(string x,string y){
  int m=x.length();
  int n=y.length();
  int c[m+1][n+1];
  for(int i=0;i<=m;i++) c[i][0]=0;
  for(int j=1;j<=n;j++) c[0][j]=0;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(x[i-1]==y[j-1]){
        c[i][j]=c[i-1][j-1]+1;
      }else{
        c[i][j]=max(c[i-1][j],c[i][j-1]);
      }
    }
  }
  cout << c[m][n] << endl;
}

int main(){
  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    string x,y;
    cin >> x >> y;
    lcs(x,y);
  }
}