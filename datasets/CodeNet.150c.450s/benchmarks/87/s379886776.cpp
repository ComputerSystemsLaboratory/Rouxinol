#include <cstdio>
#include <algorithm>

const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

int H, W = 5;
int map[10][5];

int main(){
    while(scanf("%d", &H), H){
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                scanf("%d", &map[i][j]);
            }
        }

        int res = 0;
        while(true){
            bool updated = false;
            for(int i=0;i<H;i++){
                for(int j=0,k=0;j<W;){
                    while(k < W && map[i][k] == map[i][j]){k++;}
                    if(k-j >= 3 && ~map[i][j]){
                        res += (k-j) * map[i][j];
                        for(;j<k;j++){
                            map[i][j] = -1;
                        }
                        updated = true;
                    }else{
                        j = k;
                    }
                }
            }

            // for(int i=0;i<H;i++){
            //     for(int j=0;j<W;j++){
            //         printf("%3d ", map[i][j]);
            //     }
            //     puts("");
            // }
            // puts(std::string(40, '-').c_str());
        
        
            if(!updated){break;}

            for(int i=0;i<5;i++){
                for(int j=H-1,k=H-1;j>=0;j--,k--){
                    while(k >= 0 && !~map[k][i]){k--;}
                    if(k == -1){break;}
                    std::swap(map[j][i], map[k][i]);
                }
            }      
        }

        printf("%d\n", res);
    }
}