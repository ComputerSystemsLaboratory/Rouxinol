#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    while(cin >> N >> M, N&&M){
        vector<int> taro,hana;
        int sumT = 0, sumH = 0, s;
        for(int i=0;i<N;i++){
            cin >> s;
            taro.emplace_back(s);
            sumT += s;
        }
        for(int i=0;i<M;i++){
            cin >> s;
            hana.emplace_back(s);
            sumH += s;
        }

        int a = -1,b = -1, MIN = 1e9;
        bool flg = false;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                int T = sumT - taro[i] + hana[j];
                int H = sumH - hana[j] + taro[i];
                //cout << T << " " << H << endl;
                if(T == H){
                    int card = taro[i] + hana[j];
                    if(MIN > card){
                        a = taro[i];
                        b = hana[j];
                        MIN = card;
                        flg = true;
                    }
                }
            }
            if(flg) break;
        }

        if(!flg) cout << -1 << endl;
        else cout << a << " " << b << endl;
    }
}
