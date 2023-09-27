#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int node[n+1];
    for(int i=1; i<=n; ++i){
        cin >> node[i];
    }
    for(int i=1; i<=n; ++i){
        cout << "node " << i << ": key = " << node[i] << ", ";
        int x = floor(i/2);
        if (i != 1) cout << "parent key = " << node[x] << ", ";
        if (2*i <= n) cout << "left key = " << node[2*i] << ", ";
        if (2*i + 1 <= n) cout << "right key = " << node[2*i+1] << ", ";
        cout << endl;
    }
}