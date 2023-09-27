#include <iostream>
#include <string>

using namespace std;

int lcslen[1001][1001]={0};
int compute_lcslen(const string &x,const string &y);

int main(){
  int q;
  cin >> q;
  for(int i=0;i<q;++i){
    string x,y;
    cin >> x;
    cin >> y;
    cout << compute_lcslen(x,y) << endl;
  }

  return 0;
}

int compute_lcslen(const string &x,const string &y){
  for(int i=1;i<=x.length();++i){
    for(int j=1;j<=y.length();++j){
      if(x[i-1]==y[j-1]){
        lcslen[i][j] = lcslen[i-1][j-1]+1;
      }else{
        lcslen[i][j] = max(lcslen[i-1][j],lcslen[i][j-1]);
      }
    }
  }
  return lcslen[x.length()][y.length()];
} 