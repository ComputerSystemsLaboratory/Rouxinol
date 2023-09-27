#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> a, b;
    vector<string> op;
    int n, m, i = 0;
    string o;
    
    while(1) {
        cin >> n >> o >> m;
        a.push_back(n);
        op.push_back(o);
        b.push_back(m);
        
        if(op[i] == "?") break;
        
        i++;
    }
    
    for(i = 0; i < a.size(); i++) {
        if(op[i] == "?") break;
        
        if(op[i] == "+") cout << a[i]+b[i] << endl;
    
        if(op[i] == "-") cout << a[i]-b[i] << endl;
    
        if(op[i] == "*") cout << a[i]*b[i] << endl;
    
        if(op[i] == "/") cout << a[i]/b[i] << endl;
    }
    
}