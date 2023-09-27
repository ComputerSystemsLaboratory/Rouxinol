#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string X,Y;
        cin >> X >> Y;
        int L[X.length()+10][Y.length()+10];
        for(int j = 0;j < X.length()+5;j++){
            for(int k = 0;k < Y.length()+5;k++){
                L[j][k] = 0;
            }
        }
        for(int j = 1;j<=X.length();j++){
            for(int k = 1;k<=Y.length();k++){
                if(Y[k-1] == X[j-1]){
                    L[j][k] = 1+L[j-1][k-1];
                }
                else{
                    L[j][k] = max(L[j-1][k],L[j][k-1]);
                }
            }
        }
        cout << L[X.length()][Y.length()] << endl;
    }
    return 0;
}