#include <bits/stdc++.h>
using namespace std;
void roll(vector<int> &saikoro,char houkou){
    //配列番号は固定：上が１、下が６、手前が２、奥が５、右が３、左が４
    int x,y;
    x = saikoro.at(6);
    y = saikoro.at(1);
    if(houkou == 'N') {//北に転がす
        saikoro.at(6) = saikoro.at(5);
        saikoro.at(1) = saikoro.at(2);
        saikoro.at(2) = x;
        saikoro.at(5) = y;
    }
    else if(houkou == 'S') {//南に転がす
        saikoro.at(6) = saikoro.at(2);
        saikoro.at(1) = saikoro.at(5);
        saikoro.at(5) = x;
        saikoro.at(2) = y;
    }
    else if(houkou == 'E') {//東に転がす
        saikoro.at(6) = saikoro.at(3);
        saikoro.at(1) = saikoro.at(4);
        saikoro.at(4) = x;
        saikoro.at(3) = y;
    }
    else if(houkou == 'W') {//西に転がす
        saikoro.at(6) = saikoro.at(4);
        saikoro.at(1) = saikoro.at(3);
        saikoro.at(3) = x;
        saikoro.at(4) = y;
    }
    else if(houkou == 'T') {//上下を保ったまま上から見て時計回りに回転
        int u,v;
        u = saikoro.at(2);
        v = saikoro.at(5);
        saikoro.at(2) = saikoro.at(3);
        saikoro.at(5) = saikoro.at(4);
        saikoro.at(3) = v;
        saikoro.at(4) = u;
    }
}

int main() {
    vector<int> sai(7);
    for(int i = 1; i <= 6; i++) {
        cin >> sai.at(i);
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        //上の面にaがくるように回転
        if(a == sai.at(2)) roll(sai,'N');
        else if(a == sai.at(3)) roll(sai,'W');
        else if(a == sai.at(4)) roll(sai,'E');
        else if(a == sai.at(5)) roll(sai,'S');
        else if(a == sai.at(6)) {
            roll(sai,'N');
            roll(sai,'N');
        }
        //手前の面にbがくるように回転
        while(b != sai.at(2)) {
            roll(sai,'T');
        }
        
        //右側の数字を出力
        cout << sai.at(3) << endl;
    }
}
