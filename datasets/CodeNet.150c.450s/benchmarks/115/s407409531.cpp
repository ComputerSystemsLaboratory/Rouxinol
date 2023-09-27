#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int n, m;
char s[1000], t[1000];
int dp[1001][10001];

int main(void){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        cin >> t;
        int sizeofs = strlen(s);
        int sizeoft = strlen(t);
        for(int i=0;i<sizeofs;i++){
            for(int j=0;j<sizeoft;j++){
                if(s[i] == t[j]){
                    dp[i+1][j+1] = dp[i][j] + 1;
                }else{
                    dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }
        cout << dp[sizeofs][sizeoft] <<endl;
    }

    return 0;
}