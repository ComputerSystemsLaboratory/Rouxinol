#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        int u, k;
        cin >> u >> k;
        for(int j = 0; j < k; j++){
            int v;
            cin >> v;
            a[u - 1][v - 1] = 1; 
        }
        
    }

    for(auto vv: a){
        for(int i = 0; i < n; i++){
            cout << vv[i];
            if(i != n - 1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}