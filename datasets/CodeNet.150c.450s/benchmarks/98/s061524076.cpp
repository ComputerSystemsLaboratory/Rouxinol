#include <iostream>
#include <set>
using namespace std;

#define INF 1000000

int main(void){
    while(true){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){ break; }

        double input, tarotal = 0, hanakotal = 0;
        set<double> taro, hanako;
        for(int i = 0; i < n; i++){
            cin >> input;
            taro.insert(input);
            tarotal += input;
        }
        for(int i = 0; i < m; i++){
            cin >> input;
            hanako.insert(input);
            hanakotal += input;
        }

        double now, dif, ans_taro = INF, ans_hanako = INF;
        for(set<double>::iterator it = taro.begin(); it != taro.end(); it++){
            now = tarotal - *it;
            dif = (hanakotal + *it - now) / 2;

            if(hanako.count(dif) != 0 && *it + dif < ans_taro + ans_hanako){
                ans_taro = *it;
                ans_hanako = dif;
            }
        }

        if(ans_taro == INF && ans_hanako == INF){ cout << -1 << endl; }
        else{ cout << ans_taro << " " << ans_hanako << endl; }
    }
    return 0;
}