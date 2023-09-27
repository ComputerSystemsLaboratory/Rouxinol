#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x;
    int i = 0, n;
    
    while (1) {
        cin >> n;
        x.push_back(n);
        
        if(x[i] == 0) break;

        i++;
    }
    
    for(i = 0; i < x.size(); i++) {
        if(x[i] == 0) break;
        
        cout << "Case " << i+1 << ": " << x[i] << endl;
    }
}