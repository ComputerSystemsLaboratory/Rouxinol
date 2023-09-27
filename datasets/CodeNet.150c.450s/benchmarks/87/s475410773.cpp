#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <functional>
#include <array>
#include <queue>

using namespace std;

int main(){
    while(true){
        int H;
        cin >> H;
        if(H == 0) break;

        vector<vector<int>> vec(H, vector<int>(5));
        for(int i = 0; i < H; ++i) for(int j = 0; j < 5; ++j){
            cin >> vec[i][j];
        }

        int ans = 0;
        bool changed = true;
        while(changed){
            changed = false;
            for(int i = 0; i < H; ++i){
                for(int j = 0; j <= 2; ++j){
                    int num = vec[i][j];
                    if(num == 0) continue;
                    int same = 0;
                    for(int k = j + 1; k < 5; ++k){
                        if(num != vec[i][k]){
                            break;
                        }
                        same = k - j + 1;
                    }
                    if(same >= 3){
                        changed = true;
                        ans += num * same;
                        for(int k = 0; k < same; ++k){
                            vec[i][j + k] = 0;
                        }
                    }
                }
            }
            for(int i = H - 1; i > 0; --i){
                for(int j = 0; j < 5; ++j){
                    if(vec[i][j] == 0){
                        for(int k = i; k >= 0; --k){
                            if(vec[k][j] != 0){
                                vec[i][j] = vec[k][j];
                                vec[k][j] = 0;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
