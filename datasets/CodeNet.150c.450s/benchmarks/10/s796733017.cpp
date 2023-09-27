#include <iostream>
using namespace std;
int main(){
  int n,b,f,r,v,b1[4][11],b2[4][11],b3[4][11],b4[4][11],i,j;
  for(i=0;i<4;i++){
    for(j=0;j<11;j++){
      b1[i][j]=b2[i][j]=b3[i][j]=b4[i][j]=0;
    }
  }
  cin >> n;
  for(i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    if(b==1) b1[f][r]+=v;
    else if(b==2) b2[f][r]+=v;
    else if(b==3) b3[f][r]+=v;
    else b4[f][r]+=v;
  }
  for(i=1;i<4;i++){
    for(j=1;j<11;j++){
      cout << ' ' << b1[i][j];
    }
    cout << endl;
  }
  for(i=0;i<20;i++) cout << '#';
  cout << endl;
  for(i=1;i<4;i++){
    for(j=1;j<11;j++){
      cout << ' ' << b2[i][j];
    }
    cout << endl;
  }
  for(i=0;i<20;i++) cout << '#';
  cout << endl;
  for(i=1;i<4;i++){
    for(j=1;j<11;j++){
      cout << ' ' << b3[i][j];
    }
    cout << endl;
  }
  for(i=0;i<20;i++) cout << '#';
  cout << endl;
  for(i=1;i<4;i++){
    for(j=1;j<11;j++){
      cout << ' ' << b4[i][j];
    }
    cout << endl;
  }
  return 0;
}