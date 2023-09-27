
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
typedef long long int ll;

int main(){
    vector<int> era(10000000,0);
    for (int i=1; i<era.size(); i++) {
        era[i]=1;
    }
    for (int i=2; i<era.size(); i++) {
        if (era[i]!=0) {
            int q = i + i;
            while (q<era.size()) {
                era[q]=0;
                q += i;
            }
        }
    }
    int n;
    while (cin >> n) {
        int ans=-1;
        for (int i=1; i<=n; i++) {
            if (era[i]) {
                ans++;
            }
        }
        cout << ans <<endl;
    }
}