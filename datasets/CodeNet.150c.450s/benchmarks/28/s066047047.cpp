#include<iostream>
using namespace std;

int main(){
    int n, k, w[100000], max =1, sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> w[i];
        if (max < w[i]) max = w[i];
        sum += w[i];
    }
    int ave = sum/k;
    int t;
    //tは平均値と要素の最大値のうちの大きいほう
    if(ave < max) t = max;
    else t = ave;
    int P = t;
    while(1){
        //Pは許容量、numは必要なトラック数
        int s = 0, num = 1;
        for(int j = 0; j < n; j++){
            s += w[j];
            //sが許容量を超えたらnumを増やし、sの初期値を積めなかった荷物にする
            if(s > P){
                num++;
                s = w[j];
            }
        }
        // もしトラックの数が足りたら
        if (num <= k){
            cout << P << endl;
            break;
        }
        //足りなければ
        else{
            P++;
        }

    }

}
