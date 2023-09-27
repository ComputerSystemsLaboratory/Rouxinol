#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Node {
    unsigned long long int key;
    struct Node *next;
    struct Node *prev;
};

struct Node * nil;

void init(){
   nil = (struct Node*)malloc(sizeof(struct Node));
   nil->prev = nil;
   nil->next = nil;
}

struct Node * listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void printList() {
    Node *cur = nil->next;
    int isf = 0;

    while (1) {
        if (cur == nil) break;
        if (isf++ > 0) printf(" ");
        printf("%llu", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

void deleteNode(Node *t) {
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst() {
    deleteNode(nil->next);
}


void deleteLast() {
    deleteNode(nil->prev);
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
}


void insert(int key) {
   struct Node *new_node = (struct Node * )malloc(sizeof(struct Node));
   new_node->key = key;
   new_node->next = nil->next;
   nil->next->prev = new_node;
   nil -> next = new_node;
   new_node->prev = nil;
}


//void insert(unsigned long long int  n) {
//   new_node = (struct Node * )malloc(sizeof(struct Node));
//   new_node->n = n;
//
//   if (!head) {
//       head = new_node;
//       head->next = nil;
//       tail->next = head;
//
//   }
//
//}
//
//
//
//
//void show() {
//    struct Node *node;
//    node = head;
//
//    if(node == tail){
//        cout << node->n << endl;
//    }
//    else{
//        while (node != tail) {
//
//            //cout << tail->n << " prev: " << tail->prev->n << "next: " << tail->next->n;
//            cout << node->n << " ";
//            node = node->next;
//        }
//        cout << node->n << endl;
//    }
//}
//
//void del(int n) {
//
//    struct Node *node, *prev, *target_node, *next, *tmp, *tmp_tail;
//    node = head;
//    while (node!=tail){
//        if (node->n == n) {
//            break;
//        }
//        node = node->next;
//        //cout << node->n;
//
//    }
//    //cout << "del " << node->n << "prev" << node->prev->n << "next" << node->next->n <<endl;
//
//    if (head == node){
//        tmp = head;
//        tmp_tail = tail;
//        head = head->next;
//        head->prev = tail;
//        tail->next = head;
//    }
//
//    else if (tail == node) {
//        //cout << "b";
//        tmp = head;
//        tmp_tail = tail;
//        tail = tail->prev;
//        tail->next = head;
//        head->prev = tail;
//    }
//
//
//    else {
//        //cout << "c";
//        tmp = head;
//        prev = node->prev;
//        next = node->next;
//        prev->next = next;
//        next->prev = prev;
//        head = tmp;
//
//    }
//
//
//
//}
//
//void delf(){
//
//    struct Node *node = head, *tmp;
//    tmp = head;
//    head = head->next;
//    head->prev = tail;
//
//    tail->next = head;
//    tmp = tail->next;
//
//}
//
//
//void dell(){
//    struct Node *prev, *tmp;
//    tmp = tail;
//    tail = tail->prev;
//    tail->prev->next = tail;
//    tail->next = head;
//    //tail->prev = tail->prev->prev;
//    cout << "PREV " << tail->n << "prev " << tail->prev->prev->n << " next " << tail->next->n <<endl;
//    //tail = tail->prev;
//    //tail->prev->next->next = tail;
//    //tail->next = head;
//    //tail->prev->next = tail->prev;
//    //tail->next = head;
//}



int main() {
    int n;
    char s[100];
    unsigned long long int  x;
    init();
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s%llu", s, &x);
        if (s[0] == 'i') {
            insert(x);
        }
        else if(s[0] == 'd') {
            if (strlen(s) == 6) deleteKey(x);
            if (strlen(s) == 11) deleteFirst();
            if (strlen(s) == 10) deleteLast();
        }
    }
    printList();
    return 0;

}
 