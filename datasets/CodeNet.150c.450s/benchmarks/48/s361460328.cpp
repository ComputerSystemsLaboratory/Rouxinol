#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 1000000
int main() {
    int e;
    vector<int> y, z;
    for (int i=0;;i++) {
        if (i*i>INF) break;
        y.push_back(i*i);
    }
    for (int i=0;;i++) {
        if (i*i*i>INF) break;
        z.push_back(i*i*i);
    }
    while (scanf("%d",&e)) {
        if (e==0) break;
        int m=INF+1;
        for (int i=0; i<y.size(); i++) {
            if (y[i]>e) break;
            for (int j=0; j<z.size(); j++) {
                if (z[j]>e) break;
                if (y[i]+z[j]>e) break;
                m = min(m, e-y[i]-z[j]+i+j);
            }
        }
        printf("%d\n",m);
    }
}