#include <iostream>
using namespace std;

int n;
int a[20];
int dp[20*2000*+1+2000];

int main() {

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int q;

    cin >> q;

    int m;

    for(int i=0;i<20*2000+1;i++){
        dp[i] = 0;
    }

    for(int i=0;i<n;i++){
        for(int j=20*2000;j!=-1;j--){
            if(dp[j]!=0){
                dp[j+a[i]] = 1;
            }
        }
        dp[a[i]] = 1;
    }

    for(int i=0;i<q;i++){
        cin >> m;
        if(dp[m]!=0){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}