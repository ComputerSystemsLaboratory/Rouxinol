#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())
typedef long long int ll;
typedef vector<int> vi;

int main(){
    while(1){
        int h;
        cin >> h;
        if(h == 0) break;//終了条件
        vector< vector<int> > d(h, vector<int>(5));
        rep(i, h){//入力
            rep(j, 5){
                cin >> d.at(i).at(j);
            }
        }
        bool flag = false;//データセット終了フラグ
        long long score = 0;//獲得スコア
        while(1){
            vi f(5, 0);
            rep(i, h){
                int count = 1;//連結数カウント→初期状態として一つのブロックが繋がっていると考える。
                int cnt_num = 0;//連結元の数字保存用
                int k_ = 0;//連結最終尾のx座標保存用
                rep(j, 4){//5でないのは、隣り合う二つのブロックをみているため
                    if(d.at(i).at(j) == d.at(i).at(j+1)){//連結してるなら
                        if(d.at(i).at(j)!=0)count++;
                        cnt_num = d.at(i).at(j);
                    }
                    else {//連結が途切れたら
                        if(count < 3){
                            count = 1;
                        }
                        else{//連結数が3以上なら確定(max５までしか連結しないので)
                            k_ = j;
                            break;
                        }
                    }
                    k_ = j+1;
                }
                if(count >= 3){//スコア計算
                    score += cnt_num*count;
                    flag = true;//消えるブロックがあるので処理をもう一周させる
                    rep(k, count){//消えたブロックは0（無）に変換
                        d.at(i).at(k_-k) = 0;
                    }
                }
            }
            while(1){//全部落としきるまで
                bool ex = false;//このループの終了フラグ
                for(int i = h-1; 0 < i; i--){//下から上を見て一段ずつ対象のブロックを落とす。
                    rep(j, 5){//下のブロックが0（無）なら落とす。
                        if(d.at(i).at(j)==0&&d.at(i-1).at(j)!=0){
                            d.at(i).at(j) = d.at(i-1).at(j);
                            d.at(i-1).at(j) = 0;
                            ex = true;
                        }
                    }
                }
                if(!ex) break;
            }
            if(!flag) break;
            flag = false;
        }
        cout << score << endl;
    }
    return 0;
}
