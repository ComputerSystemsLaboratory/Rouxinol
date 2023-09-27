#include <iostream>
using namespace std;

int main(){
  int N,A,B,C,X,Y[100],yi,fc;

  while(1){
    cin >> N >> A >> B >> C >> X;
    if (N==0&&A==0&&B==0&&C==0&&X==0)break;

    for (int i=0;i<N;i++){
      cin >> Y[i];
    }

    fc=0;
    yi=0;
    while (1){
      if (fc>10000){
	cout << -1 << endl;
	break;
      }
      if (X==Y[yi]){
	yi++;
	if (yi>=N){
	  cout << fc << endl;
	  break;
	}
      }
      X=(A*X+B)%C;
      fc++;
    }
  }
  return 0;
}