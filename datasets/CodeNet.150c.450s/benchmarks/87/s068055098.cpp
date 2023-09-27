#include <iostream>
using namespace std;
int main(void){
    while(true){
        int h;
        cin >> h;
        if(h == 0){
            break;
        }
        int cells[h][5];
        for(int i = 0; i < h; i++){
            cin >> cells[i][0] >> cells[i][1] >> cells[i][2] >> cells[i][3] >> cells[i][4];
        }
        int score = 0;
        bool isErased = false;
        do{
            isErased = false;
            for(int i = 0; i < h; i++){
                int currentRecording = cells[i][0];
                int currentCount = 1;
                for(int j = 1; j < 5; j++){
                    if(cells[i][j] == currentRecording && currentRecording != -1){
                        currentCount++;
                    }else {
                        if(currentCount >= 3){
                            isErased = true;
                            score += currentRecording * currentCount;
                            for(int k = j - 1; k >= 0; k--){
                                if(cells[i][k] == currentRecording){
                                    cells[i][k] = -1;
                                }else{
                                    break;
                                }
                            }
                        }
                        currentCount = 1;
                        currentRecording = cells[i][j];
                    }
                }
                if(currentCount >= 3){
                    isErased = true;
                    score += currentRecording * currentCount;
                    for(int k = 4; k >= 0; k--){
                        if(cells[i][k] == currentRecording){
                            cells[i][k] = -1;
                        }else{
                            break;
                         }
                    }
                }
            }
            if(isErased){
            for(int i = h; i > 0; i--){
                for(int j = 0; j < 5; j++){
                    if(cells[i][j] == -1){
                        for(int k = i; k >= 0; k--){
                            if(cells[k][j] != -1){
                                cells[i][j] = cells[k][j];
                                cells[k][j] = -1;
                                break;
                            }
                        }
                    }
                }
            }
            }
        }while(isErased);
        cout << score << endl;
    }
    return 0;
}

