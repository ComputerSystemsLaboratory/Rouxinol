#include <bits/stdc++.h>
using namespace std;

bool func() {
    int m, n_min, n_max;
    scanf("%d", &m);
    scanf("%d", &n_min);
    scanf("%d", &n_max);

    if(m==0 && n_min==0 && n_max==0) return true;

    int pre = -1;
    pair<int, int> max_diff = make_pair(-1, 0);;
    vector<int> data;
    for(int i=0; i<m; i++) {
        int tmp;
        scanf("%d", &tmp);
        data.push_back(tmp);
        
        if(pre!=-1) {
            if(max_diff.first <= (pre-tmp) && i>=n_min && i<=n_max) {
                max_diff = make_pair(pre-tmp, i);
            }
        }
        pre = tmp;
    }

    printf("%d\n", max_diff.second);
    return false;
}

int main() {
    bool flag = false;
    while(!flag) {
        flag = func();
    }
}

