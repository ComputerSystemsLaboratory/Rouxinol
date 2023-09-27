#include <iostream>
using namespace std;
int dfs(int n, int sum, int x){
    int cnt = 0;
    if(n == 0 && sum == 0)  return 1;
    if(n > 0){
        for(int i = x;i <= 9; i++){
            if(sum-i >= 0)    cnt += dfs(n-1, sum-i, i+1);
        }
    }
    return cnt;
}

int main(void){
    int n, sum;
    while(1){
        cin >> n >> sum;
        if(n == 0 && sum == 0)    break;
        cout << dfs(n, sum, 0) << endl;
    }
    return 0;
}

