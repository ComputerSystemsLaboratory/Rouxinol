#include <stdio.h>
#include <string.h>

#define LEN 100010


typedef struct pp {
    char name[100];
    int t;
} P;


P Q[LEN];
int head, tail;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail+1)%LEN;
}


P dequeue() {
    P x;
    x = Q[head];
    head = (head+1)%LEN;
    return x;
}

int main() {
    int n, q;
    int i;
    int sumtime = 0;
    P u;
    scanf("%d %d", &n, &q);
    
    for ( i = 1; i <= n; i++ ) {
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }

    head = 1;
    tail = n + 1;

    while ( head != tail ) {
        u = dequeue();
        if ( u.t > q ) {
            u.t -= q;
            enqueue(u);
            sumtime += q;
        } else {
            sumtime += u.t;
            printf("%s %d\n", u.name, sumtime); 
        }
    }

    return 0;
}
