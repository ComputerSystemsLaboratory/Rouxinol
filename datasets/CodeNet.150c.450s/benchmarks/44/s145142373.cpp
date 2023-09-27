#include <iostream>
using namespace std;

int main(){
    int a[4];
    int b[4];

    int hit;
    int blow;

    while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
        hit = 0;
        blow = 0;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(a[i] == b[j]){
                    if(i == j) hit++;
                    else blow++;
                }
            }
        }
        printf("%d %d\n", hit, blow);
    }

    return 0;
}