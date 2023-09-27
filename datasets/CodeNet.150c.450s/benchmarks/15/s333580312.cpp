#include<iostream>

using namespace std;

int main(void){
    int i,j,n,q,S[10000],T[500],ans=0;
    cin >> n;
    for(i=0;i<n;i++) cin >> S[i];
    cin >> q;
    for(i=0;i<q;i++) cin >> T[i];
    for(i=0;i<q;i++){
        for(j=0;j<n;j++){
            if(T[i]==S[j]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}