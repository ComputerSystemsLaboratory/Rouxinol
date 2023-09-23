#include <iostream>
using namespace std;

int A[101][101];

int main()
{
    int n,u,k,v;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> u >> k;
        for(int j = 0; j < k; ++j){
            cin >> v;
            A[u-1][v-1] = 1;
        }
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j != 0) cout << ' ';
            cout << A[i][j];
        }
        cout << endl;
    }
}