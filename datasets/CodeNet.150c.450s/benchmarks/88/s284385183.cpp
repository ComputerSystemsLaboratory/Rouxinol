#include <bits/stdc++.h>
using namespace std;

int main(){
    while (1){
        int h, w;
        cin >> h >> w;
        if (h == 0) break;
        int x = 150;
        int y = 150;
        for (int i = 1; i <= 150; i++){
            for (int j = i + 1; j <= 150; j++){
                if (h * h + w * w < i * i + j * j){
                    if (x * x + y * y > i * i + j * j){
                        x = i;
                        y = j;
                    }
                    else if (x * x + y * y == i * i + j * j){
                        if (x > i){
                            x = i;
                            y = j;
                        }
                    }
                }
                if (h * h + w * w == i * i + j * j){
                    if (h >= i) continue;
                    if (x * x + y * y > i * i + j * j){
                        x = i;
                        y = j;
                    }
                    else if (x * x + y * y == i * i + j * j){
                        if (x > i){
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        cout << x << " " << y << endl;
    }
}
