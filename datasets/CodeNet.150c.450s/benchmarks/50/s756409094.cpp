#include<iostream>
using namespace std;

int coin[] = {1, 5, 10, 50, 100, 500};
int remain, in;
int main()
{
  while(cin >> in, in){
    remain = 1000 - in;
    int ans = 0;
    for(int i = 0; i < 6; i++){
      ans += remain / coin[5 - i];
      remain %= coin[5 - i];
    }
    cout << ans << endl;
  }
  return 0;
}