#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

        int n, A[100001], dp[100000];

        //??\???
        cin >> n;
        for(int i = 0; i < n; i++) {
                cin >> A[i];
        }

        dp[0] = A[0];
        int length = 1;

        for(int i = 1; i < n; i++) {
                if(dp[length-1] < A[i]) {
                        dp[length++] = A[i];
                } else {
                        for(int j = 0; j < length; j++) {
                                if(dp[j] >= A[i]){
                                   dp[j] = A[i];
                                   break;
                                 }
                        }
                }
        }
        cout << length << endl;
}