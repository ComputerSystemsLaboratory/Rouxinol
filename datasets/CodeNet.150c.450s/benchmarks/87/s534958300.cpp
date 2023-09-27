#include <iostream>
using namespace std;

int main(){
    int h;
    while(cin >> h, h){
        int d[11][6] = {0};
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++){
                cin >> d[i][j];
            }
        }
        int score = 0;
        bool f = true;
        while(f){
            f = false;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < 5; j++){
                    if(d[i][j] <= 0) continue;
                    int now = d[i][j];
                    int count = 1;
                    for(int k = j + 1; k < 5; k++){
                        if(d[i][k] == now){
                            count++;
                        }else{
                            break;
                        }
                    }
                    if(count >= 3){
                        f = true;
                        score += now * count;
                        for(int k = j; k < j + count; k++){
                            d[i][k] = -1;
                        }
                        break;
                    }
                }
            }
            for(int i = 0; i < 5; i++){
                for(int j = h - 1; j > 0; j--){
                    if(d[j][i] == -1){
                        for(int k = j - 1; k >= 0; k--){
                            if(d[k][i] > 0){
                                swap(d[j][i], d[k][i]);
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << score << endl;
    }
}