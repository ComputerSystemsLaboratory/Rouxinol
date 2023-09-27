#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <cstdio>

using namespace std;

struct Process {
    char name[11];
    int time;
};

static const int MAX = 100000;
Process queue[MAX];
int qsize = 0, qhead = 0, qtail = 0;


// 結果自体は正しいが時間がかかりすぎる
int main(void) {

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; ++i) {
        cin >> queue[i].name >> queue[i].time;
    }
    qsize = qtail = n;

    int elapsed = 0;
    while (qhead != qtail) {
        Process p = queue[qhead++];
        qhead %= MAX;
        if (p.time - q <= 0) {
            elapsed += p.time;
            printf("%s %d\n", p.name, elapsed);
        }
        else {
            elapsed += q;
            p.time -= q;
            queue[qtail++] = p;
            qtail %= MAX;
        }
    }

    return 0;
}