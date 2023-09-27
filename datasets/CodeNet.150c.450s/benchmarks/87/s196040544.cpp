#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int field[n][5];
        for(int i=0; i < n; i++){
            for(int j=0; j < 5; j++) cin >> field[i][j];
        }


        int point = 0;
        while(1){
            int save = point;
            for(int i=0; i < n; i++){
                for(int j=0; j < 5; j++){
                    if(field[i][j] == field[i][j+1]){
                        int count = 0;
                        for(int k=j; k < 5; k++){
                            if(field[i][j] == field[i][k]) count++;
                            else break;
                        }
                        if(3 <= count){
                            point += field[i][j]*count;
                            for(int k=0; k < count; k++) field[i][j+k] = 0;
                        }
                    }
                }
            }

            if(point == save || n == 1) break;

            for(int i = n-1; 0 < i; i--){
                for(int j=0; j < 5; j++){
                    if(field[i][j] == 0){
                        for(int k=0; 0 <= i-k; k++){
                            if(field[i-k][j] != 0){
                                field[i][j] = field[i-k][j];
                                field[i-k][j] = 0;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << point << endl;
    }
}