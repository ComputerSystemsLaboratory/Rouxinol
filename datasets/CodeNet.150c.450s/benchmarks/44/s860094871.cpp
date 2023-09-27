#include<iostream>
using namespace std;
int main(){
    int a[4][50],b[4][50],hit,blow,n;
    n = 0;
    int i = 0;
    while(cin >> a[0][i] >> a[1][i] >> a[2][i] >> a[3][i] >> b[0][i] >> b[1][i] >> b[2][i] >> b[3][i]) {
        n++; i++;
    };
    for(int i = 0;i < n;i++){
        hit = blow = 0;
        for(int j = 0;j < 4;j++){
            for(int k = 0;k < 4;k++){
                if(a[j][i] == b[k][i]){
                    if(j == k){
                        hit++;
                    }
                    else{
                        blow++;
                    }
                }
            }
        }
        cout << hit << " " << blow << endl;
    }
}
