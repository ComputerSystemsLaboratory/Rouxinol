#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int m, nmin, nmax;

int main() {
    while(cin >> m >> nmin >> nmax, m&&nmin&&nmax){
        vector<int> v;
        int maxV=0;
        for(int i=0; i<m; ++i){
            int a; cin >> a; v.push_back(a);
        }
        int index=0;
        for(int i=nmin; i<=nmax; ++i){
            int temp = v[i-1]-v[i];
            if(maxV <= temp){
                index = i; maxV = temp;
            }
        }
        cout << index << endl;
    }
    return 0;
}
