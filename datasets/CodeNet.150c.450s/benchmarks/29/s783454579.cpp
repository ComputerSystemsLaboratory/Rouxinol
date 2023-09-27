#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

typedef struct n{
    int Key;
    n *prev,*next;
} Node;

Node *nil;
const string COMMAND[4] = {
    "insert",
    "deleteFirst",
    "deleteLast",
    "delete"
};

void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil -> next = nil;
    nil -> prev = nil;
}

void intsert(int Key){
    Node *x;
    x = (Node *)malloc(sizeof(Node));
    x -> Key = Key;
    x -> next = nil -> next;
    nil -> next -> prev = x;
    x -> prev = nil;
    nil -> next = x;
}

void deleteNode(Node *t){
    if(t == nil) return;
    t -> next -> prev = t -> prev;
    t -> prev -> next = t -> next;
    free(t);
}

void deletefirst(){
    deleteNode(nil -> next);
}

void deletelast(){
    deleteNode(nil -> prev);
}

Node* SearchNode(int Key){
    Node *ser;
    ser = nil -> next;
    while (ser != nil && ser -> Key != Key) {
        ser = ser -> next;
    }
    return ser;
}

void delete_X(int Key){
    deleteNode(SearchNode(Key));
}

void ReadCommand(){
    char comm[16];
    scanf("%s",comm);
    if ( comm == COMMAND[0] ){
        int Key;
        scanf("%d",&Key);
        intsert(Key);
    }else if (comm == COMMAND[1]){
        deletefirst();
    }else if (comm == COMMAND[2]){
        deletelast();
    }else{
        int Key;
        cin >> Key;
        deleteNode(SearchNode(Key));
    }
}

void printNode(){
    Node *k;
    k = nil -> next;
    while (k != nil) {
        if (k -> next != nil) {
            printf("%d ",k -> Key);
        }else{
            printf("%d\n",k -> Key);
        }
        k = k -> next;
    }
}

int main(){
    init();
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) ReadCommand();
    printNode();
    return 0;
}