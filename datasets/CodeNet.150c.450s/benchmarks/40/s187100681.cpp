#include <iostream>
#include <string>
using namespace std;

int main(){
    int dice[4][4];
    int nextd[4][4];
    string s;
    int north=0,east=0;
    bool n;

    cin >> dice[0][0] >> dice[3][0] >> dice[0][1] >> dice[0][3] >> dice[1][0] >> dice[0][2];
    cin >> s;

    dice[2][0] = dice[0][2];
    dice[2][1] = dice[0][1];
    dice[2][2] = dice[0][0];
    dice[2][3] = dice[0][3];
    for(int i=1;i<4;i++){
        dice[3][i] = dice[3][0];
        dice[1][i] = dice[1][0];
    }

    for(int j=0;j<s.length();j++){
        n=false;
        if(s[j]=='N'){
            north=1;
            n=true;
        }else if(s[j]=='S'){
            north=3;
            n=true;
        }else if(s[j]=='E') east=1;
        else if(s[j]=='W') east=3;

        if(n){
            for(int k=0;k<north;k++){
                nextd[0][0] = dice[3][1];
                nextd[0][1] = dice[2][1];
                nextd[0][2] = dice[1][3];
                nextd[0][3] = dice[0][3];
                nextd[2][0] = dice[1][1];
                nextd[2][1] = dice[0][1];
                nextd[2][2] = dice[3][3];
                nextd[2][3] = dice[2][3];
                for(int l=0;l<4;l++){
                    nextd[1][l] = dice[0][0];
                    nextd[3][l] = dice[2][0];
                }

                for(int a=0;a<4;a++){
                    for(int b=0;b<4;b++){
                        dice[a][b]=nextd[a][b];
                    }
                }
            }
        }else{
            for(int m=0;m<east;m++){
                nextd[0][0] = dice[0][3];
                nextd[0][1] = dice[0][0];
                nextd[0][2] = dice[0][1];
                nextd[0][3] = dice[0][2];
                nextd[2][0] = dice[2][1];
                nextd[2][1] = dice[2][2];
                nextd[2][2] = dice[2][3];
                nextd[2][3] = dice[2][0];
                for(int c=0;c<4;c++){
                    nextd[1][c] = dice[1][0];
                    nextd[3][c] = dice[3][0];
                }

                for(int a=0;a<4;a++){
                    for(int b=0;b<4;b++){
                        dice[a][b]=nextd[a][b];
                    }
                }                
            }
        }
    }

    cout << dice[0][0] << endl;
}