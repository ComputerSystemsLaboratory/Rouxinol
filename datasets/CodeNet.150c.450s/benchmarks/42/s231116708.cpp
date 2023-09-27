#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

#define LEN 100005

typedef struct {
    string name;
    int time;
} Process;

Process Que[LEN];
int head, tail, n;

void enqueue(Process x) {
    Que[tail] = x;
    tail = (tail + 1) % LEN;
}

Process dequeue() {
    Process x = Que[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int elaps = 0, c;
    int q;
    Process u;
    cin >> n >> q;
    
    for ( int i = 1; i <= n; i++ ) {
        cin >> Que[i].name >> Que[i].time;
    }
    head = 1;
    tail = n + 1;
    
    while ( head != tail ) {
        u = dequeue();
        c = min(q, u.time);
        u.time -= c;
        elaps += c;
        if ( u.time > 0 ) enqueue(u);
        else {
            cout << u.name << ' ' << elaps << endl;
        }
    }
    
    return 0;
}