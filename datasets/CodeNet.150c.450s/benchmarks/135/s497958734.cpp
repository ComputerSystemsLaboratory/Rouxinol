#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

using namespace std;

int map_h[1500];
int map_w[1500];
int hh[1500001];
int ww[1500001];

int main(){
    while(1){
        int h,w;
        cin >> h >> w;
        if(h+w == 0)break;
        for(int i = 0;i < h;i++)cin >> map_h[i];
        for(int i = 0;i < w;i++)cin >> map_w[i];
        int Max = 0;
        for(int i = 0;i <= 1500000;i++){
            hh[i] = 0;
            ww[i] = 0;
        }
        for(int i = 0;i < h;i++){
            int sum = 0;
            for(int j = i;j >= 0;j--){
                sum = sum + map_h[j];
                hh[sum]++;
            }
            Max = max(Max, sum);
        }
        for(int i = 0;i < w;i++){
            int sum = 0;
            for(int j = i;j >= 0;j--){
                sum = sum + map_w[j];
                ww[sum]++;
            }
            Max = max(Max, sum);
        }
        int ans = 0;
        for(int i = 0;i <= Max;i++){
            ans = ans + hh[i]*ww[i];
        }
        cout << ans << endl;
    }
    return 0;
}