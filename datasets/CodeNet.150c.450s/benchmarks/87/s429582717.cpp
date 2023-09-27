#include<iostream>
#include<vector>
using namespace std;

int main(){
    int H;
    int i,j;
    int memo[10][5];
    bool update;
    int score;

    cin >> H;
    while(H>0){
        score = 0;
        vector<int> tow[5];
        vector<int>::iterator t;

        //input
        for(i=0; i<H; i++){
            for(j=0; j<5; j++){
                cin >> memo[i][j];
            }
        }

        //make tower
        for(j=0; j<5; j++){
            for(i=H-1; i>=0; i--){
                tow[j].push_back(memo[i][j]);
            }
        }

        //shoumetsu hantei
        update = 1;
        while(update){
            update=0;
            vector<int> dou[10];
            for(i=0; i<H; i++){
                for(j=0; j<3; j++){
                    if(tow[j][i]==tow[j+1][i]&&tow[j][i]>0){
                        if(tow[j+1][i]==tow[j+2][i]){
                            update = 1;
                            if(j<2){
                                if(tow[j+2][i]==tow[j+3][i]){
                                    if(j<1){
                                        if(tow[j+3][i]==tow[j+4][i]){
                                            dou[i].push_back(j);
                                            dou[i].push_back(j+4);
                                            dou[i].push_back(tow[j][i]);
                                            break;
                                        }
                                    }
                                    dou[i].push_back(j);
                                    dou[i].push_back(j+3);
                                    dou[i].push_back(tow[j][i]);
                                    break;
                                }
                            }
                            dou[i].push_back(j);
                            dou[i].push_back(j+2);
                            dou[i].push_back(tow[j][i]);
                            break;
                        }
                    }
                }
            }

            //add score
            for(i=0; i<H; i++){
                if(!dou[i].empty()){
                    score += (dou[i][1]-dou[i][0]+1)*dou[i][2];
                }
            }

            //erase
            for(i=H-1; i>=0; i--){
                if(!dou[i].empty()){
                    for(j=dou[i][0]; j<=dou[i][1]; j++){
                        tow[j].erase(tow[j].begin()+i);
                    }
                }
            }

            //add -1(none)
            for(j=0; j<5; j++){
                while(tow[j].size()<H){
                    tow[j].push_back(-1);
                }
            }
        }

        //answer
        cout << score << endl;

        //input
        cin >> H;
    }
    return 0;
}
