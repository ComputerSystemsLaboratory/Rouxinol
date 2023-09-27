#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 10000

int main()
{
    int n;
    scanf("%d", &n);
    int S[MAX];
    for (int i=0; i<n; i++) scanf("%d", &S[i]);
    int q;
    scanf("%d", &q);
    vector<int> T;
    for (int i=0; i<q; i++) {
        int x;
        scanf("%d", &x);
        T.push_back(x);
    }

    vector<int> M;
    for (int i=0; i<n; i++) {
        int s = S[i];
        for (int j=0; j<T.size(); j++) {
            vector<int>::iterator iter = find(M.begin(), M.end(), s);
            if (s == T[j] && iter == M.end()) {
                M.push_back(s);
            }
        }
    }
    printf("%lu\n", M.size());

    return 0;
}