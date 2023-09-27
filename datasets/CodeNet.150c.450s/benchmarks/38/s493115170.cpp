#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        vector<int> sa;
        for (int j=0; j<3; j++) {
            int inp;
            cin >> inp;
            sa.push_back(inp);
        }
        sort(sa.begin(), sa.end());
        if (sa[0]*sa[0]+sa[1]*sa[1]==sa[2]*sa[2]) {
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }
    
}