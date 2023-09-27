#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int h;
    while(1){

        
        cin >> h;
        if(h == 0){
            break;
        }

        
        vector<vector<int>> stone;
        stone.resize(5);
        for(int i = 0; i < 5; i++){
            stone[i].resize(h);
        }
        for(int i = h-1; i >= 0; i--){
            for(int j = 0; j < 5; j++){
                cin >> stone[j][i];
            }
        }
        
        int old_score = 0;
        int score = 0;
        while(1){
            old_score = score;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < 3; j++){
                    if(stone[j][i] == stone[j+1][i] && stone[j][i] == stone[j+2][i] && stone[j][i] != 0){
                        int old_stone_num = stone[j][i];
                        for(int k = 0; j + k < 5 && stone[j+k][i] == old_stone_num; k++){
                            score += stone[j+k][i];
                            stone[j+k][i] = 0;
                        }
                        break;
                    }
                }
            }
            
            if(old_score == score){
                break;
            }
        
            
            for(int i = 0; i < 5; i++){
                stone[i].erase(remove(stone[i].begin(), stone[i].end(), 0), stone[i].end());
                for(int j = stone[i].size(); j < h; j++){
                    stone[i][j] = 0;
                }
            }


        }
        cout << score << endl;
    }
    return 0;
}