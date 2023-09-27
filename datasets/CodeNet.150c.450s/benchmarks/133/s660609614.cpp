#include <bits/stdc++.h>
using namespace std;

int main() {
    //d日分のコンテスト
    int d;
    cin >> d;
    //満足度低下指数
    vector<int> c(26);
    for (int i = 0; i < 26; i++) cin >> c.at(i);
    //満足度増加量
    vector<vector<int>> s(d, vector<int>(26));
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> s.at(i).at(j);
        }
    }
    
    //ｄ日目にどのテストをするか
    vector<int> t(d);
    for (int i = 0; i < d; i++) cin >> t.at(i);
    //d日目までの満足度
    vector<int> v(d);
    //最後に開催された日
    vector<int> last(26);
    //トータルの満足度
    int incr = 0;
    int decr = 0;
    //D日分の満足度増減を調べる
    for (int i = 0; i < d; i++){
        //満足度の増加は、i日目に開催されたtest = tの満足度増加量で決まる
        incr += s.at(i).at(t.at(i) - 1);
        //最後に開催された日にちのカウンターにi日目のテストを追加
        last.at(t.at(i) - 1) = i + 1;
        //満足度低下のカウンター
        //それぞれのタイプに対して、低下量を足しあげる
        for (int j = 0; j < 26; j++){
           decr += c.at(j) * ((i + 1) - last.at(j));
        }
        //最終的な満足度を計上
        v.at(i) = incr - decr;
    }
    
    for (int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
}