#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
    vector< vector<int> > dp(1001,vector<int>(1001));

    string x;
    string y;
    cin >> x;
    cin >> y;
    int xLength = x.length();
    int yLength = y.length();

    for(int i=0; i <= xLength; i++){
        dp[i][0] = i;
    }

    for(int i=0; i <= yLength; i++){
        dp[0][i] = i;
    }    


    for(int i=1; i <= xLength; i++){
        for(int j=1; j <= yLength; j++){
            int suggest[3];
            if(x[i-1] == y[j-1]){
                suggest[0] = dp[i-1][j-1]; 
            }else{
                suggest[0] = dp[i-1][j-1] + 1; 
            }
            suggest[1] = dp[i][j-1] + 1;
            suggest[2] = dp[i-1][j] + 1;

            if(suggest[0] > suggest[1]){
                suggest[0] = suggest[1];
            }
            if(suggest[0] > suggest[2]){
                suggest[0] = suggest[2];
            }
            dp[i][j] = suggest[0];
        }
    }

    cout << dp[xLength][yLength] << endl;

    return 0;
}

