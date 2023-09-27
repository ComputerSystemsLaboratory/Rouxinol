#include<iostream>

using namespace std;

const int MAX_N = 150;

int diag(int h, int w){
    return h*h + w*w;
}

int main(){
    while (1){
        int h, w;

        cin >> h >> w;
        if (h == 0){
            break;
        }

        int d = diag(h, w);
        int ans_h = MAX_N;
        int ans_w = MAX_N;

        bool flag = false;
        for (int i = 1; i < MAX_N; i++){
            for (int j = i + 1; j < MAX_N; j++){
                if ((diag(i, j) == d && i > h) || diag(i, j) > d){
                    if (diag(i, j) < diag(ans_h, ans_w)){
                        ans_h = i;
                        ans_w = j;
                    }
                }
            }
        }

        cout << ans_h << " " << ans_w << endl;
    }


    return 0;
}