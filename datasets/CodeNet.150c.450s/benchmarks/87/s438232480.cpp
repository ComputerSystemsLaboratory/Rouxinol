#include<iostream>
using namespace std;

int main(){
    int h;
    while(cin >> h, h){
        int mat[h][5];
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++){
                cin >> mat[i][j];
            }
        }

        int score = 0;
        bool update = true;

        while(update){
            update = false;

            // vanish
            for(int i = h; i >= 0; i--){
                for(int j = 0; j < 3; j++){
                    if(mat[i][j] == 0)  continue;
                    int pos = j;
                    while(pos+1 < 5 && mat[i][j] == mat[i][pos+1])  pos++;

                    // vanish!
                    if(pos-j+1 >= 3){
                        update = true;
                        for(int d = j; d <= pos; d++){
                            score += mat[i][d];
                            mat[i][d] = 0;
                        }
                        j = pos;
                    }
                }
            }

            // fall
            for(int i = h-2; i >= 0; i--){
                for(int j = 0; j < 5; j++){
                    if(mat[i][j]){
                        int cpi = i;
                        while(cpi+1 < h && mat[cpi+1][j] == 0){
                            swap(mat[cpi+1][j], mat[cpi][j]);
                            cpi++;
                        }
                    }
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}
