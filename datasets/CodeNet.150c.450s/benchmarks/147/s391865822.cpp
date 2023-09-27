#include <iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> ans(10001);
    
    for(int x = 1;x <= 100;x++){
          for(int y = 1; y <= 100;y++){
                for(int z = 1;z <= 100;z++){
                      int s = x * x + y * y + z * z;
                      s += x * y + y * z + z * x;
                      if(s > 10000)continue;
                      else ans[s]++;
                }
          }
    }
    for(int i = 1;i <= n;i++){
          cout << ans[i] << endl;
    }
}
