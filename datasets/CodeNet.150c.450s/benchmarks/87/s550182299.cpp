#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1){

        int h;

        cin >> h;

        if(h == 0) break;

        int puzzle[h][5];

        for(int i=h-1; i>=0; i--){
            for(int j=0; j<5; j++){
                cin >> puzzle[i][j];
            }
        }

        int score = 0;

        while(1){

            bool deleted = false;

            for(int i=0; i<h; i++){

                for(int j=0; j<3; j++){
                    int matchnum = 1;
                    int index = -1;
                    for(int k=j; k<4; k++){
                        if(puzzle[i][k] == puzzle[i][k+1] && puzzle[i][k] != 0){
                            matchnum++;
                        }
                        else{
                            index = k;
                            break;
                        }
                    }
                    if(matchnum >= 3){

                        deleted = true;
                        if(index==-1){
                            index = 4;
                        }

                        score += matchnum * puzzle[i][index];

                        for(int k=0; k<matchnum; k++){
                            puzzle[i][index-k] = 0;
                        }

                        break;

                    }
                }

            }


            for(int g=0; g<h-1;g++) { //複数行同時に消えた時のため
                for (int j = 0; j < h - 1; j++) {
                    for (int k = 0; k < 5; k++) {
                        if (puzzle[j][k] == 0 && puzzle[j + 1][k]) {
                            swap(puzzle[j][k], puzzle[j + 1][k]);
                        }
                    }
                }
            }


            if(!deleted) break;

        }

        cout << score << endl;

    }

    return 0;
}
