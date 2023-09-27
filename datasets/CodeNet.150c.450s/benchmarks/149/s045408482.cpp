#include <cstdio>
#include <iostream>
using namespace std;


static const int MAX_NUM = 10001;

int FindRoot(int elem[], int target)
{
    int parent;

    parent = target;
    for (;;) {
        if (parent == elem[parent]) {
            break;
        }
        else {
            parent = elem[parent];
        }
    }

    return parent;
}

void Unite(int elem[], int t1, int t2)
{
    int p1, p2;

    p1 = FindRoot(elem, t1);
    p2 = FindRoot(elem, t2);

    elem[p2] = p1;

    return;
}

bool Same(int elem[], int t1, int t2)
{
    bool ret;
    int p1, p2;

    p1 = FindRoot(elem, t1);
    p2 = FindRoot(elem, t2);

    if (p1 == p2) {
        ret = true;
    }
    else {
        ret = false;
    }

    return ret;
}

int main(void)
{
    int i;
    int num, qnum;
    int q;
    int t1, t2;
    int elem[MAX_NUM] = {0};

    scanf("%d %d", &num, &qnum);
    for (i = 1; i <= num; i++) {
        elem[i] = i;
    }

    for (i = 0; i < qnum; i++) {
        scanf("%d %d %d", &q, &t1, &t2);
        switch (q) {
        case 0 :
            Unite(elem, t1, t2);
            break;
        case 1 :
            if (Same(elem, t1, t2) == true) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
            break;
        default :
            break;
        }
    }
    return 0;
}