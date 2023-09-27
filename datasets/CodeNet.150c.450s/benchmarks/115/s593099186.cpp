#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int c=0; c<N; ++c){
        string X,Y;
        cin >> X >> Y;
        int xlen = (int)X.size();
        int ylen = (int)Y.size();

        vector<vector<int> > L(xlen+1 ,vector<int>(ylen+1, 0));

        for(int i=1;i<=xlen;++i){
            for(int j=1;j<=ylen;++j){
                if(X[i-1] == Y[j-1]){
                    L[i][j] = L[i-1][j-1] + 1;
                } else {
                    L[i][j] = max(L[i-1][j], L[i][j-1]);
                }
            }
        }
        cout << L[xlen][ylen] << endl;
    }
}