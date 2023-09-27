#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct elem {
    elem *prev;
    int key;
    elem *next;
} Elem;

typedef struct {
    Elem *nil;
} DL;

Elem *initElem(int x) {
    Elem *elem = (Elem *)malloc(sizeof(Elem));
    elem->key = x;
    elem->prev = elem->next = elem;
    return elem;
}

DL initialize() {
    DL dl;
    dl.nil = initElem(-1);
    return dl;
}

void printDL(DL *dl) {
    Elem *e = dl->nil->next;
    while (1) {
        printf("%d", e->key);
        e = e->next;
        if ( e == dl->nil ) {
            break;
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

void insert(DL *dl, int x) {
    Elem *e = initElem(x);
    e->next = dl->nil->next;
    dl->nil->next->prev = e;
    dl->nil->next = e;
    e->prev = dl->nil;
}

Elem *dlSearch(DL *dl, int x) {
    Elem *e = dl->nil->next;
    while (dl->nil != e->next && e->key != x) {
        e = e->next;
    }
    return e;
}

void deleteElem(DL *dl, int x) {
    Elem *e = dlSearch(dl, x);
    if (e->key != dl->nil->key && e->key == x) {
        e->prev->next = e->next;
        e->next->prev = e->prev;
        free(e);
    }
}

void deleteFirst(DL *dl) {
    Elem *e = dl->nil->next;
    dl->nil->next = e->next;
    e->next->prev = dl->nil;
    free(e);
}

void deleteLast(DL *dl) {
    Elem *e = dl->nil->prev;
    dl->nil->prev = e->prev;
    e->prev->next = dl->nil;
    free(e);
}

int main()
{
    int n;
    DL dl = initialize();
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        char command[20]; int x;
        scanf("%s %d", command, &x);
        if (strcmp(command, "insert") == 0) {
            insert(&dl, x);
        }
        else if (strcmp(command, "delete") == 0) {
            deleteElem(&dl, x);
        }
        else if (strcmp(command, "deleteFirst") == 0) {
            deleteFirst(&dl);
        }
        else if (strcmp(command, "deleteLast") == 0) {
            deleteLast(&dl);
        }
    }
    printDL(&dl);

    return 0;
}