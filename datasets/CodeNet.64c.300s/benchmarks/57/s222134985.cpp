#include<iostream>
using namespace std;

int main(){
    int r, c;
    while(cin >> r >> c){
        if(r + c == 0)  break;

        int senbei[r][c];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> senbei[i][j];
            }
        }

        int ans = 0;
        for(int i = 0; i < (1<<r); i++){
            int flip = 0;
            for(int j = 0; j < c; j++){
                int partialFlip = 0;
                for(int k = 0; k < r; k++){
                    if((1<<k) & i){
                        if(senbei[k][j] == 1)   partialFlip++;
                    }else{
                        if(senbei[k][j] == 0)   partialFlip++;
                    }
                }
                partialFlip = max(partialFlip, r-partialFlip);
                flip += partialFlip;
            }
            ans = max(ans, flip);
        }

        cout << ans << endl;
    }

    return 0;
}
