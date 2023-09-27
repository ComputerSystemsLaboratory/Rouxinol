#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string x;
string y;

int lcs(string x, string y){

  int c[1024][1024] = {{}};
  string nul = "0";
  x = nul + x;
  y = nul + y;


  /*
  for(int i = 0;i < x.size();i++) cout << " " << x[i];
  cout << endl;
  for(int i = 0;i < y.size();i++) cout << " " << y[i];
  cout << endl;
*/
  for(int i = 1;i < x.size();i++){
    for(int j = 1;j < y.size();j++){
      if(x[i] == y[j] ) c[i][j] = c[i - 1][j - 1] + 1;
      else  c[i][j] = max(c[i - 1][j],c[i][j - 1]);

/*
      for(int k = 1;k < x.size();k++){
        for(int l = 1;l < y.size();l++){
          cout << c[k][l] << ' ';
        }
        cout << endl;
      }
*/

    }
  }

  return c[x.size() - 1][y.size() - 1];
}



int main(){
  int q;
  cin >> q;

  for(int i = 0;i < q;i++){
    cin >> x;
    cin >> y;
    cout << lcs(x,y) << endl;
  }
}