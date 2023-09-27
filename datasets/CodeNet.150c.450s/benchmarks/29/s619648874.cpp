#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

struct Node{
    int key;
    Node *prev,*next;
};

Node *NIL;

void initList(){
    NIL = (Node *)malloc(sizeof(Node));
    NIL -> prev = NIL;
    NIL -> next = NIL;
}

void insert(int K){
    Node *x;
    x = (Node *)malloc(sizeof(Node));
    
    x -> key = K;
    x -> prev = NIL;
    x -> next = NIL -> next;
    
    x -> next -> prev = x;
    x -> prev -> next = x;
}

Node* find(int K){
    Node *Ser = NIL;
    Ser = Ser -> next;
    
    while (Ser != NIL) {
        if (Ser -> key == K) {
            return Ser;
        }
        Ser = Ser -> next;
    }
    return NIL;
}

void deleteNode(Node *t){
    if (t == NIL) return;
    t -> next -> prev = t -> prev;
    t -> prev -> next = t -> next;
    free(t);
}

void delete_x(int K){
    deleteNode(find(K));
}

void delete_first(){
    deleteNode(NIL -> next);
}

void delete_last(){
    deleteNode(NIL -> prev);
}

void printList(){
    Node *Ser = NIL;
    Ser = Ser -> next;
    if (Ser == NIL) return;
    
    while (Ser != NIL) {
        printf("%d",Ser -> key);
        if (Ser -> next != NIL) {
            printf(" ");
        }
        Ser = Ser -> next;
    }
    printf("\n");
}

int main(){
    char op[20];
    int N;
    cin >> N;
    initList();
    
    for (int i = 0; i < N; i++) {
        scanf("%s",op);
        int x;
        if (op[0] == 'i') {
            scanf("%d",&x);
            insert(x);
        }else{
            if (strlen(op) > 6) {
                if (op[6] == 'F') {
                    delete_first();
                }else{
                    delete_last();
                }
            }else{
                scanf("%d",&x);
                delete_x(x);
            }
        }
    }
    printList();
    return 0;
}