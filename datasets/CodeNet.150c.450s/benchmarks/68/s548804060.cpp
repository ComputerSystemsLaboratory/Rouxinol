#include <cstdio>
#include <algorithm>
using namespace std;
int students[1001];

int main()
{
    int n, mindiff;
    for (; ;) {
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 0; i < n; i++) scanf("%d", &students[i]);
        sort(students, students+n);
        mindiff = 1000001;
        for (int i = 1; i < n; i++) {
            mindiff = min(mindiff, students[i] - students[i-1]);
            if (mindiff == 0) break;
        }
        printf("%d\n", mindiff);
    }
    return 0;
}

