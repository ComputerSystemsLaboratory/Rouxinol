#include <iostream>
using namespace std;

int main(void){
    int w,h;
    while(cin >> h >> w,h){
        int sq = h*h+w*w;
        int ansh = 1000, answ = 1000, anssq = 1000000;
        // i <-> h , j <-> w
        for(int i=1; i<151;i++){
            for(int j=i+1; j<151; j++){
                int tempd = i*i+j*j;
                if(tempd > sq){
                    if(tempd < anssq){
                        ansh = i;
                        answ = j;
                        anssq = tempd;
                    }
                    else if(tempd == anssq && i < ansh){
                        ansh = i; answ = j;
                    }
                }
                else if(tempd == sq){
                    if(i > h && anssq != tempd){
                        ansh = i; answ = j; anssq = tempd;
                    }
                }
            }
        }
        cout << ansh << " " << answ << endl;
    }
    return 0;
}