#include <iostream>
using namespace std;
const int MAX = 150;

int main(){
    int rect[MAX+1][MAX+1],H,W;
    
    for(int i = 1 ; i <= MAX ; i++)
        for(int j = 1 ; j <= MAX ; j++)
            rect[i][j] = i*i+j*j;
    
    while(cin >> H >> W ,H){
        int cmp_bef = H*H+W*W;
        int nH = MAX,nW = MAX;
   
        for(int i = MAX-1 ; i > 0 ; i--){
            for(int j = MAX ; j > i ; j--){
                if(i == H && j == W) continue;
                int cmp_af = nH*nH+nW*nW;
                if(rect[i][j] > cmp_bef || (rect[i][j] == cmp_bef && i > H)){
                    if(rect[i][j] < cmp_af || (rect[i][j] == cmp_af && i < nH)){
                        nH = i;
                        nW = j;
                    }
                }
            }
        }
        cout << nH << " " << nW << endl;
    }
    
    return 0;
}