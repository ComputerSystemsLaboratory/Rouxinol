#include<iostream>
#include<iomanip>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
#include<cstring>
#include <sstream>
using namespace std;
int main(void){
    int n,i,ans,r_up;
    cin >> n;
    ans = 100000;
    for(i = 0; i < n; i++){
        ans += ans * 0.05;
        r_up = ans % 1000;
        if(r_up != 0){
            ans += (1000 - r_up);
        }
    }
    cout << ans << endl;
    return 0;
}