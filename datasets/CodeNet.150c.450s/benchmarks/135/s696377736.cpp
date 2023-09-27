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

int map_N[1500];
int map_M[1500];
int NN[1500001];
int MM[1500001];

int main(){
    while(1){
        int N,M;
        cin >> N >> M;
        if(N+M == 0)break;
        for(int i = 0;i < N;i++)cin >> map_N[i];
        for(int i = 0;i < M;i++)cin >> map_M[i];
        int Max = 0;
        for(int i = 0;i <= 1500000;i++){
            NN[i] = 0;
            MM[i] = 0;
        }
        for(int i = 0;i < N;i++){
            int sum = 0;
            for(int j = i;j >= 0;j--){
                sum = sum + map_N[j];
                NN[sum]++;
            }
            Max = max(Max, sum);
        }
        for(int i = 0;i < M;i++){
            int sum = 0;
            for(int j = i;j >= 0;j--){
                sum = sum + map_M[j];
                MM[sum]++;
            }
            Max = max(Max, sum);
        }
        int ans = 0;
        for(int i = 0;i <= Max;i++){
            ans = ans + NN[i]*MM[i];
        }
        cout << ans << endl;
    }
    return 0;
}