#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define NUM 1000
int dp[NUM + 1][NUM + 1];

void calc(string X, string Y){
    for(int i = 0; i <= X.size(); i++){
        for(int j = 0; j <= Y.size(); j++){
            dp[i][j] = 0;
        }
    }

    for(int j = 1; j <= Y.size(); j++){
        for(int i = 1; i <= X.size(); i++){
            if(X[i - 1] == Y[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    printf("%d\n", dp[X.size()][Y.size()]);

}

int main(void){
    int q;
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        string X;
        string Y;
        cin >> X;
        cin >> Y;
        calc(X, Y);
    }
}


