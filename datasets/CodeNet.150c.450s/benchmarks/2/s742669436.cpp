#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& v, int p, int r){
    int x = v[r];
    int i = p-1;
    for(int j=p; j<r; j++){
        if(v[j] <= x){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1], v[r]);

    return i+1;
}

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int index = partition(v, 0, n-1);
    for(int i=0; i<n; i++) {
        if(i==index) cout << "[" << v[i] << "]";
        else cout << v[i];
        cout << " \n"[i==n-1];
    }
    
    return 0;
}
