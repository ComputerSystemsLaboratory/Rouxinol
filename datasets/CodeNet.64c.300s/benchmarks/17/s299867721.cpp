#include <iostream>
using namespace std;
int main(void){
    while(true){
        int x, y, s;
        cin >> x >> y >> s;
        if(x == 0){
            break;
        }
        
        int min = float(s) / (100.0f + float(x)) * 100.0f;
        int max = 0;
        for(int i = min; i <= s; i++){
            for(int j = 1; j <= i / 2; j++){
                int p1 = float(j) * (100.0f + float(x)) / 100.0f;
                int p2 = float(i - j) * (100.0f + float(x)) / 100.0f;
                int p = int(float(j) * (100.0f + float(y)) / 100.0f) + int(float(i - j) * (100.0f + float(y)) / 100.0f);
                if(p1 + p2 == s && p > max){
                    max = p;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}

