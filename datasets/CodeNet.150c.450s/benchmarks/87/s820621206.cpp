#include<bits/stdc++.h>
using namespace std;

//?????????????????????????¶????????????????-1???????????????

int main(){
    while(1){
        //??\???
        int h; cin >> h;
        if(!h) break;
        vector<vector<int> >  pu(h, vector<int> (h, 5));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++){
                cin >> pu[i][j];
            }
        }


        //??\????????????
        int score = 0;
        bool flag = true;
        while(flag){
            flag = false;
            for(int i = 0; i < h; i++){
                int counter = 1;
                int n = pu[i][0];
                for(int j = 1; j <= 5; j++){
                    if(j == 5){
                        if(counter >= 3 && n != -1){
                            flag = true;
                            score += counter * n;
                            for(int k = j - 1; k >= j - counter; k--){
                                pu[i][k] = -1;
                            }
                        }
                        break;
                    }

                    if(pu[i][j] == n){
                        counter++;
                    }else{
                        if(counter >= 3 && n != -1){
                            flag = true;
                            score += counter * n;
                            for(int k = j - 1; k >= j - counter; k--){
                                pu[i][k] = -1;
                            }
                            break;
                        }else{
                            counter = 1;
                            n = pu[i][j];
                        }
                    }
                }
            }

            //???????????£???????????????
            for(int j = 0; j < 5; j++){
                for(int i = 1; i < h; i++){
                    if(pu[i][j] == -1){
                        for(int k = i - 1; k >= 0; k--){
                            pu[k + 1][j] = pu[k][j];
                        }
                        pu[0][j] = -1;
                    }
                }
            }

            /*cout << "ohana" << endl;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < 5; j++){
                    cout << pu[i][j] << " ";
                }
                cout << endl;
            }
            cout << score << endl;
            int input; cin >> input;*/
        }

        cout << score << endl;
    }

    return 0;
}