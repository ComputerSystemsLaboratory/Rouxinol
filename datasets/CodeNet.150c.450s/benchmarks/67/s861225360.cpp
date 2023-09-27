#include <iostream>
#include <vector> //可変長配列
#include <queue> //キュー
#include <unordered_map> //ハッシュ連想配列
#include <numeric>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define ll long long int
#define INFTY (1<<21)

using namespace std;

int main(void){
    cin.sync_with_stdio(false);
    for(;;){
        int n; cin>>n;
        if(n==0) return 0;
        int ans = 0;
        for(int i = 1; i < n; i++){
            int sum = 0;
            for(int j = i; sum < n; j++){
                sum += j;
            }
            if(sum==n) ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
