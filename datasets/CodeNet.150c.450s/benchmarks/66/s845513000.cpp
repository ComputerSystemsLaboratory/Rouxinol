#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int N,M,islocked=1,found=0;
  char U[256][11],T[11];

  cin >> N;

  for (int i=0;i<N;i++) cin >> U[i];

  cin >> M;

  for (int i=0;i<M;i++){
    cin >> T;
    found=0;
    for (int j=0;j<N;j++)
      if (strcmp(T,U[j])==0)found=1;
    if (found){
      if (islocked) cout << "Opened by " << T << endl;
      else cout << "Closed by " << T << endl;
      islocked = !islocked;
    } else cout << "Unknown " << T << endl;
  }
  return 0;
}