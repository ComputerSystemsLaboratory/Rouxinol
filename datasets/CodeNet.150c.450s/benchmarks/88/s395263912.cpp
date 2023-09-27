#include <iostream>
using namespace std;
int getDiag(int, int);
int main(void){
    while(true){
        int h, w;
        cin >> h >> w;
        if(h == 0){
            break;
        }
        int minH = 150, minW = 150;
        for(int H = 1; H <= 151; H++){
            for(int W = H + 1; W <= 151; W++){
                if(getDiag(h, w) < getDiag(H, W) || (getDiag(h, w) == getDiag(H, W) && h < H)){
                    if(getDiag(minH, minW) > getDiag(H, W) || (getDiag(minH, minW) == getDiag(H, W) && minH > H)){
                        minH = H;
                        minW = W;
                    }
                }
            }
        }
        cout << minH << ' ' << minW << endl;
    }
}

int getDiag(int _h, int _w){
    return (_h*_h) + (_w*_w);
}

