#include <iostream>
using namespace std;
int main(void){
    int m;  //受験者の人数
    int min, max;  //合格者数の最小値と最大値
    int score[200];  //受験者の成績
    int s;  //合格者数

    while(true){
        cin >> m;
        cin >> min >> max;
        if(m == 0 && min == 0 && max == 0) break;

        for(int i = 0; i < m; i++){
            cin >> score[i];
        }
        
        int gapmax = 0;  //合格者の最低点と不合格者の最高点の差の最大値の初期値を０とする
        for(int j = min; j <= max; j++){
            int gap = score[j - 1] - score[j];
            if(gap >= gapmax){
                gapmax = gap;
                s = j;
            }
        }
        cout << s << endl;
    }
}
