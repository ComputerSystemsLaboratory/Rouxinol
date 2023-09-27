#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int (i)=0;(i) < (N); (i)++)

int main(){
    int H;
    while(cin >> H, H != 0){
        vector<vector<int>> cell(H,vector<int>(5,0));
        rep(i,H)rep(k,5) cin >> cell[i][k];
        int score = 0;
        while(1){
            int s = 0;
            for(int h = H-1;h >= 0; h--){
                int right = 0;
                for(int left = 0; left < 3; left++){
                    while(cell[h][left] == cell[h][right] && right < 5) right++;

                    if(right - left > 2){
                        s += (right - left) * cell[h][left];

                        while(left < right){
                            cell[h][left] = 0;
                            left++;
                        }
                        break;
                    }
                    if(left == right) right++;
                }
            }
            
            if(s == 0) break;
            score += s;

            for(int h = H - 1; h > 0; h--){
                for(int w = 0; w < 5; w++){
                    int hei = h;
                    while(cell[hei][w] == 0 && hei > 0) hei--;

                    for(int k = h; hei >= 0; hei--, k--){
                        if(k == hei) break;
                        swap(cell[k][w], cell[hei][w]);
                    }
                }
            }
            
        }

        cout << score << endl;
    }
}

