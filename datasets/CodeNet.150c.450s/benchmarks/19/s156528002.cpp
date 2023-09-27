#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x, y;
    int i = 0, n, m;
    
    while (1) {
        cin >> n >> m;
        x.push_back(n);
        y.push_back(m);
        
        if(x[i] == 0 && y[i] == 0) break;
        
        i++;
    }
    
    for(i = 0; i < x.size(); i++) {
        if(x[i] == 0 && y[i] == 0) break;
        
        if(x[i] > y[i]) cout << y[i] << " " << x[i] << endl;
        else cout << x[i] << " " << y[i] << endl;
    }
}