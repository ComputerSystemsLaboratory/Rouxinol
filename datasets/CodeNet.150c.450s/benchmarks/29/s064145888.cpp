#include <iostream>
#include <stdio.h>
using namespace std;
int N, K;
char COM[12];
struct Node {
    Node* prev;
    int data;
    Node* next;
};
Node* SENTINEL;
void initList(void);
bool cmpStr(char* a, const char* b);
void ins(int k);
void del(int k);
void delF(void);
void delL(void);
void printList(void);
int main(void){
    //freopen("in.txt", "r", stdin);
    scanf("%d", &N);
    initList();
    for(int i = 0; i < N; i++){
        scanf("%s%d", COM, &K);
        if (cmpStr(COM, "insert"))
            ins(K);
        else if (cmpStr(COM, "delete"))
            del(K);
        else if (cmpStr(COM, "deleteFirst"))
            delF();
        else
            delL();
    }
    printList();
    cout << endl;
    return 0;
}
void initList(void){
    SENTINEL = new Node;
    SENTINEL->prev = SENTINEL;
    SENTINEL->data = -1;
    SENTINEL->next = SENTINEL;
}
void ins(int k){
    Node* x = new Node;
    x->data = k;
    x->next = SENTINEL->next;
    SENTINEL->next->prev = x;
    SENTINEL->next = x;
    x->prev = SENTINEL;
    return;
}
void del(int k){
    Node* x = SENTINEL->next;
    while (x != SENTINEL){
        if (x->data == k){
            x->prev->next = x->next;
            x->next->prev = x->prev;
            break;
        }
        x = x->next;
    }
}
void delF(void){
    SENTINEL->next->next->prev = SENTINEL;
    SENTINEL->next = SENTINEL->next->next;
}
void delL(void){
    SENTINEL->prev->prev->next = SENTINEL;
    SENTINEL->prev = SENTINEL->prev->prev;
}
void printList(void){
    Node* x = SENTINEL->next;
    while(x != SENTINEL) {
        cout << x->data;
        x = x->next;
        if (x != SENTINEL) cout << " ";
    }
}
bool cmpStr(char* a, const char* b){
    int i = 0;
    while (*(a + i) != '\0'){
        if (*(a + i) != *(b + i)) return false;
        i++;
    }
    if (*(b + i) == '\0')
        return true;
    else
        return false;
}