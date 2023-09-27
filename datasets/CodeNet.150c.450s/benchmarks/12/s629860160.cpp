#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++){
            cout << "node " << i+1 << ": key = " << v[i] << ", ";
            if(i != 0) cout << "parent key = " << v[(i+1)/2-1] << ", ";
            if((i+1) * 2 <= n) cout << "left key = " << v[(i+1)*2-1] << ", ";
            if((i+1) * 2 + 1 <= n) cout << "right key = " << v[(i+1)*2] << ", ";
            cout << endl;
        }
    }
}