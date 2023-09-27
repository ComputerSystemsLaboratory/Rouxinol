#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    //池の面積は同じ高さにある坂（x座標をそれぞれi,jとする)に挟まれた水平部分を考えればj - iと分かることを使って計算していく　
    stack<int> stck1; //下り坂の左端
    stack<pair<int, int>> stck2; //<池の左端,池の面積>
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == '\\') stck1.push(i); 
        else if(s.at(i) == '/' && !stck1.empty()){ // これは\/がペアを作れる時
            int tmp = stck1.top(); stck1.pop();
            int a = i - tmp; //この/に対応する\で挟まれた水平部分の面積はi-tmpで表せる
            while(!stck2.empty() && stck2.top().first > tmp){ //池の左端が今考えている/に対応する\だった場合
                a += stck2.top().second; //より大きな池の面積が得られる
                stck2.pop(); 
            }
            stck2.push(make_pair(tmp, a)); //更新した値をstackへ
        }
    } 
    int sum = 0; //面積の和
    stack<int> ans; //答え用のスタック
    while(!stck2.empty()){
        ans.push(stck2.top().second); //各池の面積を左からの順に直す
        sum += stck2.top().second; 
        stck2.pop();
    }
    //以下出力の処理
    cout << sum << endl;
    cout << ans.size();
    while(!ans.empty()){
        cout << " " << ans.top();
        ans.pop();
    }
    cout << endl;
}
