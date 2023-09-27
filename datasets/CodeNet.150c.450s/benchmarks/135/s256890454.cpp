#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n, m; cin >> n >> m;
        if(n == 0 && m == 0) break;
        vector<int> h = {0}, w = {0}; //h, wは累積和をとる(h[0] = w [0] = 0　とする)
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            h.push_back(a + h.back());
        }
        for(int i = 0; i < m; i++){
            int b; cin >> b;
            w.push_back(b + w.back());
        }
        vector<int> height(1500100); //縦幅の最大値1500000
        vector<int> width(1500100); //横幅の最大値1500000
        //縦幅としてありうる長さはカウントを増やす
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                height.at(h.at(j) - h.at(i)) += 1;
            }
        }
        //横幅についても同じ
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j <= m; j++){
                width.at(w.at(j) - w.at(i)) += 1;
            }
        }
        //正方形を数える(この部分はO(10^3*n)で間に合う)
        long long cnt = 0;
        for(int i = 0; i < 1500010; i++){
            cnt += height.at(i) * width.at(i);
        }
        cout << cnt << endl;
    }
}
