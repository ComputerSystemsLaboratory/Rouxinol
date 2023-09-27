#include <iostream>
#include <string>
using namespace std;
int L[1001][1001];
int main(){
  string a,b;
  cin >> a;
  cin >> b;

  for(int i=0;i<=a.size();++i) L[i][0]=i;
  for(int i=0;i<=b.size();++i) L[0][i]=i;
  
  for(int i=1;i<=a.size();++i){
    for(int j=1;j<=b.size();++j){
      int k=0;
      if(a[i-1]==b[j-1]) k=0;
      else k=1;
      L[i][j]=min( L[i-1][j]+1, min( L[i][j-1]+1, L[i-1][j-1]+k ) );
    }
  }
  cout << L[a.size()][b.size()] << endl;
}