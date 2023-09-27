#include <iostream>
using namespace std;

int main(){
  int N,M,P,Xwin,Xt,cnt;

  while(1){
    cin >> N >> M >> P;
    Xwin=0;
    Xt=0;
    cnt=0;
    if (N==0&&M==0&&P==0) break;
    for (int i=0;i<N;i++){
      cin >> Xt;
      if (M==i+1)Xwin=Xt;
      cnt+=Xt;
    }
    if (Xwin==0)cout << Xwin << endl;
    else cout << (cnt*100*(100-P)/100/Xwin) << endl;
  }
  return 0;
}