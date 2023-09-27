#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> seq;
    int n, q, tmp, cnt;

    scanf("%d", &n);
    seq.reserve(n);
    for(int i=0; i<n; ++i) {
        scanf("%d", &tmp);
        seq.push_back(tmp);
    }

    sort(seq.begin(), seq.end());

    scanf("%d", &q);
    cnt = 0;
    for(int i; i<q; ++i) {
        scanf("%d", &tmp);
        if(binary_search(seq.begin(), seq.end(), tmp))   ++cnt;
    }

    printf("%d\n", cnt);
}