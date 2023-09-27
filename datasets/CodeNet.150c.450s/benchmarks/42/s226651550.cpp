#include<iostream>
using namespace std;
#include<algorithm>
#include<string.h>
#define MAX 100000

int head, tail;
struct Proc {string name; int t;};
Proc Q[MAX];

void enqueue(Proc x) {
        Q[tail] = x;
        tail = (tail + 1) % MAX;
}

Proc dequeue() {
        Proc x = Q[head];
        head = (head + 1) % MAX;
        return x;
}

int main() {
        int elaps = 0, c, i, q, n;
        Proc u;
        cin >> n >> q;
        for(i = 0; i < n; i++) {
                cin >> Q[i].name >> Q[i].t;
        }
        head = 0; tail = n;
        while(head != tail) {
                u = dequeue();
                c = min(q, u.t);
                u.t -= c;
                elaps += c;
                if(u.t > 0) enqueue(u);
                else {
                        cout << u.name << " " << elaps << endl;
                }
        }
        return 0;
}