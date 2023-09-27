#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;
const int MOD = 1000000007;


typedef long long int ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;

//石の座標と個数を指定して消す関数．
void del(vector<vector<int> >& stone,int x,int y,int nums){
    rep(i,nums){
        stone[y][x-i]=stone[y-1][x-i];
        if(stone[y-1][x-i]!=0){
            del(stone,x-i,y-1,1);
        }
    }
}

int soleve(vector<vector<int> > stone,int h){
    int score = 0;
    bool onemore; // stoneの配置が変わった場合もう一度上からみるフラグ

    do{
        onemore = false;
        rep(i,h){
            int pre = stone[i+1][0];
            int same = 1;
            rep(j,4){
                
                if(pre == stone[i+1][j+1] && pre != 0){
                //同じ要素だった
                    same++;
                }else if(same >= 3){
                //違う要素だったがそれまでに3個連続していた
                    score += same * stone[i+1][j];
                    del(stone,j,i+1,same);
                    same = 1;
                    pre = stone[i+1][j+1];
                    onemore = true;
                }else {
                //それ以外
                    same = 1;
                    pre = stone[i+1][j+1];
                }
            }

            if(same >= 3){
            //最後の行の最後を確認
                score += same * stone[i+1][4];
                del(stone,4,i+1,same);
                onemore = true;
                same = 0;
            }
        }
    }while(onemore);
    return score;
}


int main() {
    int h;
    vector<int> toprow(5,0);//簡単のため最上段の上に0でうめた行を追加．
    cin>>h;
    while (h){
      vector<vector<int> > stones;
      stones.push_back(toprow);
      rep(i,h){
          vector<int> row(5);
          rep(j,5) {
              cin>>row[j];
          }
          stones.push_back(row);
      }
      cout<<soleve(stones,h)<<endl;
      cin>>h;
    }
    
    return 0;
}

