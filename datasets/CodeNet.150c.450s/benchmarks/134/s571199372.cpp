#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM = 25;
static const int NOELEM  = -1;

struct stNode {
    int parent;
    int left;
    int right;
};

void Preoder(stNode elem[], int root)
{
    if (root != NOELEM) {
        printf(" %d", root);
        Preoder(elem, elem[root].left);
        Preoder(elem, elem[root].right);
    }
    return;
}

void Inoder(stNode elem[], int root)
{
    if (root != NOELEM) {
        Inoder(elem, elem[root].left);
        printf(" %d", root);
        Inoder(elem, elem[root].right);
    }
    return;
}

void Postoder(stNode elem[], int root)
{
    if (root != NOELEM) {
        Postoder(elem, elem[root].left);
        Postoder(elem, elem[root].right);
        printf(" %d", root);
    }
    return;
}

int main(void)
{
    int i;
    int num;
    int key;
    int left, right;
    stNode elem[MAX_NUM];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        elem[i].parent = NOELEM;
        elem[i].left   = NOELEM;
        elem[i].right  = NOELEM;
    }

    for (i = 0; i < num; i++) {
        scanf("%d %d %d", &key, &left, &right);
        elem[key].left  = left;
        elem[key].right = right;
        elem[left].parent  = key;
        elem[right].parent = key;
    }

    for (i = 0; i < num; i++) {
        if (elem[i].parent == NOELEM) {
            key = i;
            break;
        }
    }

    printf("Preorder\n");
    Preoder(elem, key);
    printf("\n");

    printf("Inorder\n");
    Inoder(elem, key);
    printf("\n");

    printf("Postorder\n");
    Postoder(elem, key);
    printf("\n");

    return 0;
}