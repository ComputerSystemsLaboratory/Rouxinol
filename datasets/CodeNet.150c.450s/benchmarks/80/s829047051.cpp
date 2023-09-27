#include<iostream>
using namespace std;
int main(){
  int J,S,R,E,P1,P2;
  cin >> J >> S >> R >> E;
  P1=J+S+R+E;
  cin >> J >> S >> R >> E;
  P2=J+S+R+E;
  if(P1<P2){
    cout << P2 << endl;
  }
  else if(P2<P1){
    cout << P1 << endl;
  }
  else if(P1==P2){
    cout << P1 << endl;
  }
  return (0);
}