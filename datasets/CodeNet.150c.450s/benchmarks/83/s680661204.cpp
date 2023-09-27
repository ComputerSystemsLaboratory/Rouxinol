#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
    int N,W; cin >> N >> W;
    int ww[N][2];
    for(int i=0;i<N;i++){
        cin >> ww[i][0] >> ww[i][1];
    }

    int V[N+1][W+1];
    for(int i=0; i<= N;i++){
        for(int j=0; j<= W;j++){
            if(i<=0 || j <=0){
                V[i][j] = 0;
            }
            else{
                if(j-ww[i-1][1]<0)
                    V[i][j] = V[i-1][j];
                else
                    V[i][j] = max(ww[i-1][0]+V[i-1][j-ww[i-1][1]], V[i-1][j]);
            }
        }
    }

    cout << V[N][W] << endl;
}