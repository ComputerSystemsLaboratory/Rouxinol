#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int LP[1005][1005];

int main(){
    int j, k;
    string x, y;
    cin >> x >> y;

    for(j = 1; j <= x.size(); j++){
        LP[j][0] = j;
    }
    for(k = 1; k <= y.size(); k++){
        LP[0][k] = k;
    }

    for(j = 1; j <= x.size(); j++){
        for(k = 1; k <= y.size(); k++){
            int m = min(LP[j-1][k] + 1, LP[j][k-1] + 1);//削除、追加
            if(x[j-1] == y[k-1]){
                m = min(LP[j-1][k-1], m);
                LP[j][k] = m;
            }
            else{
                m = min(LP[j-1][k-1] + 1, m);//置換する
                LP[j][k] = m;
            }
        }
    }

    printf("%d\n", LP[x.size()][y.size()]);
    return 0;
}
