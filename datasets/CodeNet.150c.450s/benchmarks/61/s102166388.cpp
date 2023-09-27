#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
int n, a, b, c, x;

int main() {
    while(cin>>n>>a>>b>>c>>x, n||a||b||c||x){
        vector<int> v;
        for(int i=0; i<n; ++i){
            int a; cin >> a;
            v.push_back(a);
        }
        int index=0, frame=0, rm=(a*x+b)%c;
        if(v[0]==x) index++;
        while(index!=n){
            if(frame>10000) break;
            if(rm==v[index]) index++;
            rm = (a*rm+b)%c;
            frame++;
            
        }
        if(frame>10000) cout << -1 << endl;
        else cout << frame << endl;
    }
    return 0;
}
