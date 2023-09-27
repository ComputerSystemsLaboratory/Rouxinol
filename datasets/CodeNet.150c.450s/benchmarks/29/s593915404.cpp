#include <iostream>
#include <stdlib.h>
using namespace std;
struct List{
    int key;
    List *prev, *next;
};
List *head;
void init(){
    head = (List *)malloc(sizeof(List));
    head->prev = head;
    head->next = head;
}
void insert(int key){
    List *x = (List *)malloc(sizeof(List));
    x->key = key;
    x->next = head->next;
    head->next->prev = x;
    head->next = x;
    x->prev = head;
}
List* searchList(int key){
    List *p = head->next;
    while(p != head && p->key != key){
        p = p->next;
    }
    return p;
}
void deleteList(List *t){
    if(t == head) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}
void deleteKey(int key){
    deleteList(searchList(key));
}
void deleteFirst(){
    deleteList(head->next);
}
void deleteLast(){
    deleteList(head->prev);
}
void show(){
    List *p = head->next;
    int i = 0;
    while(p != head){
        if(i > 0) cout << " ";
        cout << p->key;
        p = p->next;
        i++;
    }
    cout << endl;
}
int main() {
    int n;
    string command;
    int x;

    init();

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> command;
        if(command == "insert"){
            cin >> x;
            insert(x);
        }else if(command == "delete"){
            cin >> x;
            deleteKey(x);
        }else if(command == "deleteFirst") deleteFirst();
        else deleteLast();
    }
    show();
    return 0;
}