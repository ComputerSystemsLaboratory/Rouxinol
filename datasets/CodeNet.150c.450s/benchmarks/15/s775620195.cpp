#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    int S[n];
    for ( int i = 0;i < n;i++)cin >> S[i];
    cin >> q;
    int T[q];
    for ( int i = 0;i < q;i++)cin >> T[i];
    
    int A[10000];
    int x = 0;
    for ( int i = 0;i < q;i++){
        for ( int j = 0;j < n;j++){
            if(S[j] == T[i]){
                A[x] = S[i];
                x++;
                break;
            }
        }
    }
    cout << x << endl;
    
    
    return 0;
}