#include<iostream>
using namespace std;
int main()
{
  int money,count = 0,oturi[1000] = {};
  int money2[6] = {500,100,50,10,5,1};

  for(int i = 0;i >= 0;i++){
    cin >> money;
    count++;
    if(money == 0)
      break;
    oturi[i] = 1000 - money;
  }

  for(int j = 0;j < count;j++){
    int maisu = 0;
    for(int i = 0;i < 6;i++){
      maisu += oturi[j] / money2[i];
      oturi[j] %= money2[i];
    }
    if(maisu > 0)
      cout << maisu << endl;
  }
    return 0;
  }
    