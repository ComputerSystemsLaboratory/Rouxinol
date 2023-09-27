#include <iostream>
#include <vector>

using namespace std;

const int MAX_H = 10;
const int W = 5;
int H;

int S[MAX_H][W];

int del(){
    int ret = 0;

    for(int i=0; i<H; i++){
        vector<pair<int, int>> d;
        int cnt = 1;
        int s = 0;
        for(int j=0; j<W-1; j++){
            if(S[i][j] == S[i][j+1]){
                cnt++;
            }else{
                d.push_back(make_pair(s, cnt));
                cnt = 1;
                s = j+1;
            }
        }
        d.push_back(make_pair(s, cnt));
        for(int j=0; j<d.size(); j++){
            if(S[i][d[j].first] == -1) continue;
            if(d[j].second >= 3){
                ret += S[i][d[j].first]*d[j].second;
                for(int k=0; k<d[j].second; k++){
                    S[i][d[j].first+k] = -1;
                }
            }
        }
    }
    return ret;
}

bool move(){
    bool fl = false;
    for(int i=H-2; i>=0; i--){
        for(int j=0; j<W; j++){
            if(S[i][j] == -1) continue;
            if(S[i+1][j] == -1){
                S[i+1][j] = S[i][j];
                S[i][j] = -1;
                fl = true;
            }
        }
    }
    return fl;
}

int main(){
    vector<int> ans;
    while(true){
        cin >> H;
        if(H ==0) break;

        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                cin >> S[i][j];
            }
        }

        int ta = 0;
        while(true){
            int add = del();
            if(add == 0) break;
            ta += add;
            while(move());
        }
        ans.push_back(ta);
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}
