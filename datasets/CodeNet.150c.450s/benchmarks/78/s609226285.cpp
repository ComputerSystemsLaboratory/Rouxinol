
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000;
const int INF = 1<<29;
int main(){
  vector<int> dp_1(MAX+1,INF);
  vector<int> dp_2(MAX+1,INF);
  vector<int> poll(1000,0);
  for(int i = 0;i < 200;i++)poll[i] = i*(i+1)*(i+2)/6;
  dp_1[0] = 0;
  dp_2[0] = 0;
  for(int i = 1;i < MAX;i++){
    dp_1[i] = i;
    dp_2[i] = i;
    for(int j = 0;i-poll[j]>=0;j++){
      dp_1[i] = min(dp_1[i],dp_1[i-poll[j]]+1);
      if(poll[j] % 2 == 1)dp_2[i] = min(dp_2[i],dp_2[i-poll[j]]+1);
    }
  }
  int n;
  //  cout << "aaaaaa" << endl;
  while(cin >> n,n != 0){
    cout << dp_1[n] << " " << dp_2[n] << endl;
    
  }
  
  return 0;
}