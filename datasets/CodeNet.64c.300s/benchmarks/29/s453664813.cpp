#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int e;
    while(cin>>e, e){
        int ans = INF;
        for(int z=0; z*z*z<=e; z++){
            int sum = z*z*z;
            for(int y=0; y*y+sum<=e; y++){
                int x = e-y*y-sum;
                ans = min(ans, x+y+z);
            }
        }
        cout << ans << endl;
    }
    return 0;
}