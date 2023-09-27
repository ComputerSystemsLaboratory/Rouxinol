#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
int cnt[MAX];
bool isCmp[MAX] = {true};


int main() {
    ios::sync_with_stdio(false);
    int n;
    cnt[1] = 0;
    for(int i = 2; i < MAX; i++){
      if(! isCmp[i]){
        for(int j = 2; i*j < MAX; j++){
          isCmp[i*j] = true;
        }
      }
      cnt[i] = cnt[i-1] + !isCmp[i];
    }

    while(cin >> n){
      cout << cnt[n] << endl;
    }
    return 0;
}