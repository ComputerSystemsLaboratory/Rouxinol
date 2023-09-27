#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main(void){
    
    vector<int> p4;
    int c = 1, t = 0;
    while (1) {
        t = c*(c+1)*(c+2)/6;
        if (t >= 1e6) break;
        p4.push_back(t);
        c++;
    }
    
    int a[1010101] = {};
    int b[1010101] = {};
    for (int i = 1; i < 1010101; i++) {
        a[i] = 1e6;
        b[i] = 1e6;
    }
    
    for (int i = 0; i < 1010101; i++) {
        for (int j = 0; j < p4.size(); j++) {
            int t = i + p4[j];
            if (t > 1010101) break;
            a[t] = min(a[t], a[i]+1);
            if (p4[j]&1) b[t] = min(b[t], b[i]+1);
        }
    }
    int n;
    while (cin>>n && n) {
        cout << a[n] << " " << b[n] << endl;
    }
}