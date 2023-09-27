#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i, j, k, l, n = 0;
    int a[2], cnt;
    vector<vector<int> > v;
    
    while(1) {
        cin >> a[0] >> a[1];
        if(a[0] < 1 && a[1] < 1) break;
        v.push_back(vector<int>(a, a+sizeof(int)));
        ++n;
    }

    for(i=0; i<n; ++i) {
        cnt = 0;
        for(j=1; j<=v[i][0]-2; ++j) {
            for(k=j+1; k<=v[i][0]-1; ++k) {
                for(l=k+1; l<=v[i][0]; ++l) {
                    if(j+k+l == v[i][1]) ++cnt;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}