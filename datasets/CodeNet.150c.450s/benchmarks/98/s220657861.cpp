#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    int n, m;
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        int taro[100], hanako[100];
        int taro_sum = 0, hanako_sum = 0;
        for(int i = 0; i < n; i++){
            cin >> taro[i];
            taro_sum += taro[i];
        }
        for(int i = 0; i < m; i++){
            cin >> hanako[i];
            hanako_sum += hanako[i];
        }
        if((taro_sum + hanako_sum) % 2 == 1) cout << -1 << endl;
        else{
            int new_taro_sum, new_hanako_sum;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    new_taro_sum = taro_sum + hanako[j] - taro[i];
                    new_hanako_sum = hanako_sum + taro[i] - hanako[j];
                    if(new_hanako_sum == new_taro_sum){
                        cout << taro[i] << ' ' << hanako[j] << endl;
                        i = 101;
                        break;
                    }
                }
                if(i == n - 1) cout << -1 << endl;
            }
        }
    }
   return 0;
}