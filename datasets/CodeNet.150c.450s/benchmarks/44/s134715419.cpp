#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int array[4][2] = {0};
    int hit = 0;
    int blow = 0;
    while (cin>>array[0][0]>>array[1][0]>>array[2][0]>>array[3][0]){
        cin >> array[0][1]>>array[1][1]>>array[2][1]>>array[3][1];
        hit = 0;
        blow = 0;
        for (int i = 0; i < 4; i++){
            if (array[i][0] == array[i][1]) {
                hit++;
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (array[i][0] == array[j][1]) {
                    if (array[i][0] != array[i][1]) {
                        blow++;
                    }
                }
            }
        }
        cout << hit << " " << blow << endl;
        //printf("%d %d\n",hit,blow);
    }
    return 0;
}