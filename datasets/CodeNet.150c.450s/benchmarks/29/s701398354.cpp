#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
*/

struct Node{
    int key;
    Node *next, *prev;
};

Node *nil;

void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
    // (*nil).next = nil
}

Node* listSearch(int key){
    Node *cur = nil->next;
    while(cur != nil && cur->key != key) cur = cur->next;
    return cur;
}


void deleteNode(Node *t){
    if(t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    deleteNode(nil->prev);
}

void deleteKey(int key){
    deleteNode(listSearch(key));
}

void insert(int key){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

void printList(){
    Node *cur = nil->next;
    int cnt = 0;
    while(1){
        if(cur == nil) break;
        if(cnt > 0) cout << " ";
        cout << cur->key;
        cnt++;
        cur = cur->next;
    }
    cout << endl;
}

int main(){
    int n; scanf("%d", &n);
    char com[20];
    int d;

    init();
    for(int i=0; i<n; i++){
        scanf("%s", com);
        if(com[0] == 'i'){
            scanf("%d", &d);
            insert(d);
        }
        else if(com[0] == 'd'){
            if(strlen(com) > 6){
                if(com[6] == 'F') deleteFirst();
                else if(com[6] == 'L') deleteLast();
            }
            else{
                scanf("%d", &d);
                deleteKey(d);
            }
        }
    }

    printList();
}
