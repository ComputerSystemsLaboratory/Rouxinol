#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
    int key;
    struct Node *prev, *next;
} Node;

Node *nil;

void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int val){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = val;
    x->next = nil->next;
    nil->next->prev = x;
    x->prev = nil;
    nil->next = x;
}

Node* listSearch(int val){
    Node *cur=nil->next;
    while(cur != nil && cur->key != val){
        cur=cur->next;
    }
    return cur;
}

void deleteNode(Node *cur){
    if(cur==nil) return;
    cur->prev->next=cur->next;
    cur->next->prev=cur->prev;
    free(cur);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    deleteNode(nil->prev);
}

void deleteKey(int val){
    deleteNode(listSearch(val));
}


void trace(){
    int i=0;
    Node *cur=nil->next;
    while(cur != nil){
        if(i>0) printf(" ");
        printf("%d", cur->key);
        i++;
        cur=cur->next;
    }
    printf("\n");
}
int main(){
    int num, i, value;
    char s[100];
    scanf("%d", &num);
    init();
    for(i=0; i<num; i++){
        scanf("%s%d", s, &value);
        if(!strcmp(s, "deleteFirst")) deleteFirst();
        else if(!strcmp(s, "deleteLast")) deleteLast();
        else if(!strcmp(s, "insert")){
            insert(value);
        }else{
            deleteKey(value);
        }
    }
    trace();
    return 0;
}