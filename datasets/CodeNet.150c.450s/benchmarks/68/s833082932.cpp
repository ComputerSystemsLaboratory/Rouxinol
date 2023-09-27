#include <bits/stdc++.h>

bool syori() {
    int n;
    scanf("%d", &n);
    if(n==0) return true;

    std::vector<int> data;
    for(int i=0; i<n; i++) {
        int tmp;
        scanf("%d", &tmp);
        data.push_back(tmp);
    }

    std::sort(data.begin(), data.end());

    int pre = -1;
    int ret = INT_MAX;
    for(int i: data) {
        if(pre != -1) {
            ret = std::min(i-pre,  ret);
        }
        pre = i;
    }
    printf("%d\n", ret);
    return false;
}

int main() {
    bool flag = false;
    while(!flag) {
        flag = syori();
    }
}

