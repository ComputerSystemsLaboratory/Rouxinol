#include <cstdio>
 
using namespace std;
 
int main(){
    char S[4] = {'S', 'H', 'C', 'D'};
    bool cards[4][13]; // s, h, c, d
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            cards[i][j] = false;
        }
    }
    int n;
    scanf("%d", &n);
    int r;
    char c;
    for(int i = 0; i < n; ++i){
        scanf("\n%c %d", &c, &r);
        for(int j = 0; j < 4; ++j){
            if(S[j] == c){
                cards[j][r - 1] = true;
            }
        }
    }
 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(!cards[i][j]) printf("%c %d\n", S[i], j + 1);
        }
    }
 
    return 0;
}