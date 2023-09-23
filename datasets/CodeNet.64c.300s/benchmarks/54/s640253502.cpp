#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int i;
    int n;
    int target;
    long long unsigned int num[21];
    long long unsigned int tmp[21];
    vector<int> l;

    scanf("%d", &n);
    for (i=0;i<21;i++) {
        num[i] = 0;
        tmp[i] = 0;
    }
    num[0] = 1;
    l.push_back(0);

    for (i=0;i<n-1;i++) {
        int j;
        int d;
        scanf("%d", &d);


        vector<int>::iterator it = l.begin();
        while (it != l.end()) {
            if ((*it) + d >= 0 && (*it) + d < 21) {
                tmp[(*it)+d] += num[*it];
            }

            if (i == 0 && d == 0) break;

            if ((*it) - d >= 0 && (*it) - d < 21) {
                tmp[(*it)-d] += num[*it];
            }
            it++;
        }

        l.clear();

        for (j=0;j<21;j++) {
            if (tmp[j]) l.push_back(j);
            num[j] = tmp[j];
            tmp[j] = 0;
        }
    }

    scanf("%d", &target);
    printf("%llu\n", num[target]);
}