#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

#define REP(var, i, j) for (int var=(i); var<(j); var++)

//定数
const int MAX_R = 10;
const int MAX_C = 10000;
//入力
int R, C;
int lol[MAX_R+2][MAX_C+2];

int main(){
    queue<int> res;
    while (cin >> R && cin >> C && R != 0 && C != 0){
        REP(i, 0, R){
            REP(j, 0, C){
                cin >> lol[i][j];
            }
        }
        int ans = 0;
        REP(k, 0, (1<<R)){
            int sum = 0;
            REP(j, 0, C){
                int cnt = 0;
                REP(i, 0, R){
                    cnt += lol[i][j]^(((1<<i)&k)>>i);
                }
                sum += max(cnt, R-cnt);
            }
            ans = max(ans, sum);
        }
        res.push(ans);
    }

    while(res.size()){
        cout << res.front() << endl;
        res.pop();
    }
}
