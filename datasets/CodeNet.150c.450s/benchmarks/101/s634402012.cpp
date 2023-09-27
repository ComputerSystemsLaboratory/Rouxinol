#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

static const int MAX_NUM = 100000;

void DFS(int group[], vector<int> vec[], int gnum, int start)
{
    stack<int> S;
    int target;
    int i;
    int tmp;

    S.push(start);
    group[start] = gnum;

    while (S.empty() == false) {
        target = S.top();
        for (i = 0; i < vec[target].size(); i++) {
            if (group[vec[target][i]] == 0) {
                group[vec[target][i]] = gnum;
                S.push(vec[target][i]);
                break;
            }
        }
        if (i == vec[target].size()) {
            S.pop();
        }
    }

    return;
}

void SetupGroup(int group[], vector<int> vec[], int elemnum)
{
    int i;
    int gnum = 0;

    for (i = 0; i < elemnum; i++) {
        if (group[i] == 0) {
            ++gnum;
            DFS(group, vec, gnum, i);
        }
    }
}

int main(void)
{
    int i;
    int num;
    int elemnum;
    int qnum;
    int ele1, ele2;
    vector<int> vec[MAX_NUM];
    int group[MAX_NUM] = {0};

    scanf("%d %d", &elemnum, &num);
    for (i = 0; i < num; i++) {
        scanf("%d %d", &ele1, &ele2);
        vec[ele1].push_back(ele2);
        vec[ele2].push_back(ele1);
    }

    SetupGroup(group, vec, elemnum);

    scanf("%d", &qnum);
    for (i = 0; i < qnum; i++) {
        scanf("%d %d", &ele1, &ele2);
        if (group[ele1] == group[ele2]) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
}