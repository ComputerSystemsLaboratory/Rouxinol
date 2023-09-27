#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <set>
#include <math.h>
#include <utility>
#include <stack>
using namespace std;
typedef pair<int,int> P;
const int INF = (int)((unsigned int)-1>>1);

int main(){
    int taikaku[151][151];
    for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
            //jが横, iが縦
            taikaku[i][j] = i*i + j*j;
        }
    }

    while(1){
        int h,w;
        cin >> h >> w;
        if (h==0 && w==0) break;
        int input_taikaku = h*h + w*w;

        int ans_taikaku = 150*150;
        int ansh=150, answ=150;
        for(int i=1;i<150;i++){
            for(int j=i+1;j<150;j++){
                //jが横, iが縦
                if (input_taikaku < taikaku[i][j]){
                    if (ans_taikaku == taikaku[i][j]){
                        if (ansh > i){
                            ansh = i; answ = j;
                        }
                    }else if(ans_taikaku > taikaku[i][j]){
                        ans_taikaku = taikaku[i][j];
                        ansh = i; answ = j;
                    }
                }else if(input_taikaku == taikaku[i][j] && h < i){
                    if (ans_taikaku == taikaku[i][j]){
                        if (ansh > i){
                            ansh = i; answ = j;
                        }
                    }else if(ans_taikaku > taikaku[i][j]){
                        ans_taikaku = taikaku[i][j];
                        ansh = i; answ = j;
                    }
                }
            }
        }
        cout << ansh << " " << answ << endl;
    }
}