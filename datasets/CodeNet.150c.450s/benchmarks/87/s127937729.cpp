#include <bits/stdc++.h>
using namespace std;

int main(){
    int h;
    while(cin >> h && h != 0){
        vector<vector<int>> field(h, vector<int>(5));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++){
                cin >> field[i][j];
            }
        }
        
        int ans = 0;
        
        while(1){
            bool flag = true;
            for(int i = 0; i < h; i++){
                if(field[i][0] == field[i][1] && field[i][1] == field[i][2] && field[i][2] == field[i][3] && field[i][3] == field[i][4] && field[i][4] != 0){
                    flag = false;
                    ans += field[i][0] * 5;
                    field[i][0] = field[i][1] = field[i][2] = field[i][3] = field[i][4] = 0;
                }
            }
    
            for(int i = 0; i < h; i++){
                if(field[i][0] == field[i][1] && field[i][1] == field[i][2] && field[i][2] == field[i][3] && field[i][3] != 0){
                    flag = false;
                    ans += field[i][0] * 4;
                    field[i][0] = field[i][1] = field[i][2] = field[i][3] = 0;
                }
                if(field[i][1] == field[i][2] && field[i][2] == field[i][3] && field[i][3] == field[i][4] && field[i][4] != 0){
                    flag = false;
                    ans += field[i][1] * 4;
                    field[i][1] = field[i][2] = field[i][3] = field[i][4] = 0;
                }
            }
    
            for(int i = 0; i < h; i++){
                if(field[i][0] == field[i][1] && field[i][1] == field[i][2] && field[i][2] != 0){
                    flag = false;
                    ans += field[i][0] * 3;
                    field[i][0] = field[i][1] = field[i][2] = 0;
                }
                if(field[i][1] == field[i][2] && field[i][2] == field[i][3] && field[i][3] != 0){
                    flag = false;
                    ans += field[i][1] * 3;
                    field[i][1] = field[i][2] = field[i][3] = 0;
                }
                if(field[i][2] == field[i][3] && field[i][3] == field[i][4] && field[i][4] != 0){
                    flag = false;
                    ans += field[i][2] * 3;
                    field[i][2] = field[i][3] = field[i][4] = 0;
                }
            }
    
            for(int i = h - 2; i >= 0; i--){
                for(int j = 0; j < 5; j++){
                    if(field[i+1][j] != 0) continue;
                    for(int k = i + 1; k < h; k++){
                        if(field[k][j] != 0){
                            field[k-1][j] = field[i][j];
                            field[i][j] = 0;
                            break;
                        }
                        if(k == h - 1){
                            field[k][j] = field[i][j];
                            field[i][j] = 0;
                        }
                    }
                }
            }
            if(flag){
                cout << ans << endl;
                break;
            }
        }
    }
}
