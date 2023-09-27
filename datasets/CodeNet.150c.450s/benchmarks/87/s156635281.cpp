#include <iostream>
#include <utility>
using namespace std;
typedef pair<int, int> P;

int main()
{
    while(true){
        int h;
        cin >> h;
        if(h == 0) break;
        int p[22][5];
        int ans = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++){
                cin >> p[h - 1 - i][j];
                ans += p[h - 1 - i][j];
            }
        }
        for(int i = h; i < 20; i++){
            for(int j = 0; j < 5; j++) p[i][j] = 0;
        }
        while(true){
            bool del[12][5];
            bool end = true;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < 5; j++) del[i][j] = false;
            }
            for(int i = 0; i < h; i++){
                for(int j = 0; j < 3; j++){
                    if(p[i][j] != 0 && p[i][j] == p[i][j + 1] && p[i][j] == p[i][j + 2]){
                        end = false;
                        for(int k = j; k < j + 3; k++) del[i][k] = true;
                        int a = p[i][2];
                        if(a == p[i][3]){
                            del[i][3] = true;
                            if(a == p[i][4]) del[i][4] = true;
                        }
                    }
                }
            }
            if(end) break;
            for(int j = 0; j < 5; j++){
                int l = 0;
                for(int i = 0; i < h; i++){
                    while(del[l][j]) l++;
                    p[i][j] = p[l][j];
                    l++;
                }
                for(int i = h; i < 20; i++){
                    p[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < 5; j++) ans -= p[i][j];
        }
        cout << ans << endl;
    }
}
