#include <iostream>
#include <string>

using namespace std;

int lcs(string x,string y){
  int m=x.size();
  int n=y.size();
  int c[m+1][n+1];
  for(int i=0;i<=m;i++)
    c[i][0]=0;
  for(int i=1;i<=n;i++)
    c[0][i]=0;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(x[i-1]==y[j-1]) c[i][j]=c[i-1][j-1]+1;
      else c[i][j]=max(c[i-1][j],c[i][j-1]);
    }
  }
  return c[m][n];
}

int main(){
  int n; cin >> n;
  for(int i=0;i<n;i++){
    string x,y;
    cin >> x >> y;
    cout << lcs(x,y) << endl;
  }
}