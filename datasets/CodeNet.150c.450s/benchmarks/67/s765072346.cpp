#include <iostream>
using namespace std;
int main (){
  int N;
  while (cin >> N && N > 0){
    int sum = 0;
    for (int i=1; i < N; i++){ //?¶?????§?????????°????¢???????
      int s = i;
      for (int j=s+1; s<N; j++) { //N??\?????????????????§??????????¶?????????????
	s += j;
      }
      if (s == N) //??´??£??????N????????£??????????????????
	sum += 1;
    }
    cout << sum << endl;
  }
}