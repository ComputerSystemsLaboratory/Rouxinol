#include <iostream>
using namespace std;

int main(){
  int a,m[101][101],b,c,d;
  cin >> a;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      m[i][j]=0;
    }
  }
  for(int i=1;i<=a;i++){
    cin >> b >> c;
    for(int j=0;j<c;j++){
      cin >> d;
      m[i][d]=1;
    }
  }
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      cout << m[i][j];
      if(j!=a)cout<< " ";
    }
    cout << endl;
  }
  return 0;
}