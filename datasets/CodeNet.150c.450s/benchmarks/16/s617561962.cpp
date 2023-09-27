#include <stack>
#include <stdio.h>
#include <string.h>

typedef struct {
    int left;
    int right;
    int area;
} POND;

int main() {
    std::stack<int> S1;
    std::stack<POND> S2;
    char buf[20000 + 1];
    scanf("%s", buf);
    int right, left, area;
    for (int i = 0; i < strlen(buf); i++) {
        // printf("%c\n", buf[i]);
        if (buf[i] == '\\') {
            S1.push(i);
        } else if (buf[i] == '/') {
            if (S1.empty()) {
                continue;
            }
            left = S1.top();
            S1.pop();
            right = i;
            area = i - left;
            while (!S2.empty() && S2.top().left > left) {
                area += S2.top().area;
                S2.pop();
            }
            S2.push({left, right, area});
        } else {
            // do nothing
        }
    }
    int cnt = 0;
    std::stack<int> S3;
    while (!S2.empty()) {
        area = S2.top().area;
        S2.pop();
        cnt += area;
        S3.push(area);
    }
    printf("%d\n", cnt);
    printf("%d", S3.size());
    while (!S3.empty()) {
        printf(" %d", S3.top());
        S3.pop();
    }
    printf("\n");
    return 0;
}

