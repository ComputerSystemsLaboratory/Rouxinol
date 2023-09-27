#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define N_MAX 100

typedef struct _v {
    int k;
    int *v;
    int f;
    int l;
} Vertex;
Vertex Adj[N_MAX];

int t = 0;

void depth_search(int i) {
//    printf(" i %d\n", t);
    if (Adj[i].f == 0) {
        Adj[i].f = t;
//        printf("  Adj[%d] : k = %d f = %d\n", i, Adj[i].k, t);
    }
    else {
        t--;
        return;
    }

    for (int j = 0; j < Adj[i].k; j++) {
        t++;
//        printf("t:%d\n", t);
        depth_search(Adj[i].v[j]);
    }
    t++;
//    printf("t:%d\n", t);
    Adj[i].l = t;
//    printf(" Adj[%d].l = %d\n", i, Adj[i].l);
    return;
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k >> k;
        Adj[i].k = k;
        Adj[i].v = new int[k];
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            Adj[i].v[j] = v - 1;
        }
        Adj[i].f = 0;
        Adj[i].l = 0;
    }

    for (int i = 0; i < n; i++) {
        t++;
        depth_search(i);
        cout << i + 1 << " " << Adj[i].f << " " << Adj[i].l << endl;
    }

    return 0;
}

