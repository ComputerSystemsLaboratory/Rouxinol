#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, x;
    
    vector<int> a;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    
    reverse(a.begin(), a.end());
    
    for(int i = 0; i < n; i++) {
        if(i == n-1) cout << a[i] << endl;
        else cout << a[i] << " ";
    }
    
    
}