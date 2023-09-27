#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

typedef struct data {
    char name_[11];
    int time_;
} data_t;

int main(void)
{
    int n, q, curTime = 0;
    cin >> n >> q;
    queue<data_t> que;
    for (int i = 0; i < n; i++) {
        data_t tmp;
        scanf("%s%d%*c", tmp.name_, &tmp.time_);
        que.push(tmp);
    }
    while (!(que.empty())) {
        data_t tmp = que.front(); que.pop();
        if (tmp.time_ - q <= 0) {
            curTime += tmp.time_;
            cout << tmp.name_ << " " << curTime << endl;
        } else {
            tmp.time_ -= q;
            curTime += q;
            que.push(tmp);
        }
    }

    return 0;
}