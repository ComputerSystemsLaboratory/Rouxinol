#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int G[100][100] = {0};
queue<int> v;

void adjacent(int u, int k){
    int j;
    for(int i=0; i<k; i++){
        j = v.front(); v.pop();
        G[u-1][j-1] = 1;
    }
}

int main(){
    int n; cin >> n;
    int u, k, num;
    for(int i=0; i<n; i++){
        cin >> u >> k;
        for(int i=0; i<k; i++){
            cin >> num;
            v.push(num); 
        }
        adjacent(u, k);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j != n-1){
                cout << G[i][j] << " ";
            }else{
                cout << G[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}