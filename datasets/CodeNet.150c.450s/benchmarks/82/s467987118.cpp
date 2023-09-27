#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
#include<cmath>
using namespace std;

int main() {
    int num[7] = { 0 }, question, q1[25] = { 0 }, q2[25] = { 0 }, ans[25] = { 0 }, i;

    for (i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &question);
    for (i = 0; i < question; i++) {
        scanf("%d%d", &q1[i], &q2[i]);
    }

    for (i = 0; i < question; i++) {
        if (q1[i] == num[0] && q2[i] == num[1]) ans[i] = 3;
        else if (q1[i] == num[0] && q2[i] == num[2]) ans[i] = 5;
        else if (q1[i] == num[0] && q2[i] == num[3]) ans[i] = 2;
        else if (q1[i] == num[0] && q2[i] == num[4]) ans[i] = 4;
        else if (q1[i] == num[1] && q2[i] == num[0]) ans[i] = 4;
        else if (q1[i] == num[1] && q2[i] == num[2]) ans[i] = 1;
        else if (q1[i] == num[1] && q2[i] == num[3]) ans[i] = 6;
        else if (q1[i] == num[1] && q2[i] == num[5]) ans[i] = 3;
        else if (q1[i] == num[2] && q2[i] == num[1]) ans[i] = 6;
        else if (q1[i] == num[2] && q2[i] == num[4]) ans[i] = 1;
        else if (q1[i] == num[2] && q2[i] == num[5]) ans[i] = 5;
        else if (q1[i] == num[2] && q2[i] == num[0]) ans[i] = 2;
        else if (q1[i] == num[3] && q2[i] == num[0]) ans[i] = 5;
        else if (q1[i] == num[3] && q2[i] == num[1]) ans[i] = 1;
        else if (q1[i] == num[3] && q2[i] == num[4]) ans[i] = 6;
        else if (q1[i] == num[3] && q2[i] == num[5]) ans[i] = 2;
        else if (q1[i] == num[4] && q2[i] == num[0]) ans[i] = 3;
        else if (q1[i] == num[4] && q2[i] == num[2]) ans[i] = 6;
        else if (q1[i] == num[4] && q2[i] == num[3]) ans[i] = 1;
        else if (q1[i] == num[4] && q2[i] == num[5]) ans[i] = 4;
        else if (q1[i] == num[5] && q2[i] == num[1]) ans[i] = 4;
        else if (q1[i] == num[5] && q2[i] == num[2]) ans[i] = 2;
        else if (q1[i] == num[5] && q2[i] == num[3]) ans[i] = 5;
        else if (q1[i] == num[5] && q2[i] == num[4]) ans[i] = 3;
    }

    for (i = 0; i < question; i++) {
        printf("%d\n", num[ans[i]-1]);
    }

    return 0;
}