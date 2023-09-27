#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int ans = 0;

bool check(vector<vector<int> >& vec){
    int n = (int)vec.size();
    bool ok = false;
    rep(i,n){
        int s=0, t=0;
        int cri = 0;
        if(vec[i][0] == vec[i][1] && vec[i][1] == vec[i][2] && vec[i][2] > 0){
            s = 0, t = 3;
            cri = vec[i][0];
            if(vec[i][3] == cri){
                t++;
                if(vec[i][4] == cri){
                    t++;
                }
            }
        }else if(vec[i][1] == vec[i][2] && vec[i][2] == vec[i][3] && vec[i][2] > 0){
            s = 1, t = 4;
            cri = vec[i][1];
            if(vec[i][4] == cri){
                t++;
            }
        }else if(vec[i][2] == vec[i][3] && vec[i][3] == vec[i][4] && vec[i][2] > 0){
            s = 2, t = 5;
            cri = vec[i][2];
        }
        for(int j = s; j < t; j++){
            ok |= true;
            vec[i][j] = -1;
        }
        ans += cri*(t-s);
    }
    return ok;
}

void down(vector<vector<int> >& vec)
{
    int n = (int)vec.size();
    for(int i = n-1;i >= 1;i--){
        rep(j,5){
            if(vec[i][j] == -1){
                for(int k = i-1; k >= 0; k--){
                    if(vec[k][j] > 0){
                        vec[i][j] = vec[k][j];
                        vec[k][j] = -1;
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    while(1){
        int h;
        cin >> h;
        if(h == 0){
            break;
        }
        ans = 0;
        vector<vector<int> > vec(h,vector<int>(5));
        rep(i,h){
            rep(j,5){
                cin >> vec[i][j];
            }
        }
        while(1){
            if(check(vec)){
                // rep(i,h){
                //     rep(j,5){
                //         cout << vec[i][j] << " ";
                //     }
                //     cout << "\n";
                // }
                down(vec);
                // rep(i,h){
                //     rep(j,5){
                //         cout << vec[i][j] << " ";
                //     }
                //     cout << "\n";
                // }
            }else{
                break;
            }
        }
        cout << ans << "\n";
    }
}

