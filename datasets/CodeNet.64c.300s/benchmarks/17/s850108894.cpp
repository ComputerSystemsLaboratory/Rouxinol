#if 0
???????????????????\??????¨??¨????????????????????£????????????????????????
??????????????????????????¨??????????????????????????????????????????????????°????????????????????????????????????????????????????????£????????????????????§??????
?????????????????????????????´???????????????????????\????????????????´???´??????????????¨???????????????
while?????¨????????§??????
????????´???????????????????????????????????§??????
#endif
#include <iostream>
using namespace std;
int X, Y, S;
int tax(int rate,int value){
  int cost;
  cost = (rate + 100)*value/100;
  return cost;
}
int solve(){
  int maximum = 0;
  for(int i = 1; i < S; ++i)
    for(int j = 1; j < S; ++j)
      if(tax(X,i) + tax(X,j) == S)
	maximum = max(maximum, tax(Y,i) + tax(Y,j));
  return maximum;
}
int main(){
  while(cin >> X >> Y >> S && X > 0 ){
    cout << solve() << endl;
  }
}