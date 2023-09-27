#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>

typedef struct box { int val; box *prev, *next; } box_t;
box_t* init()
{
    box_t* head = new box_t;
    head->val = -1;
    head->next = NULL;
    head->prev = NULL;
    return head;
}
box_t* make_tail(box_t* head)
{
    box_t* tail = new box_t;
    tail->val = -1;
    head->next = tail;
    tail->next = NULL;
    tail->prev = head;
    return tail;
}
// f_insert, f_delete_key, f_delete, b_delete, f_show.
box_t* f_insert(box_t* head, int data)
{
    box_t* box = new box_t;
    box->val = data;
    box->next = head->next;
    box->prev = head;
    head->next->prev = box;
    head->next = box;
    return box;
}
int f_delete_key(box_t* head, box_t* tail, int key)
{
    box_t* box = head->next;
    while(box != tail){
        if(box->val == key){
            box->next->prev = box->prev;
            box->prev->next = box->next;
            delete box;
            return 1; }
        box = box->next; };
    return -1;
}
int f_delete(box_t* head)
{
    if(!(head->next->next)) return -1;
    box_t* box = head->next;
    head->next = box->next;
    box->next->prev = head;
    delete box;
    return 1;
}
int b_delete(box_t* tail)
{
    if(!(tail->prev->prev)) return -1;
    box_t* box = tail->prev;
    tail->prev = box->prev;
    box->prev->next = tail;
    delete box;
    return 1;
}
void f_show(box_t* head, box_t* tail)
{
    box_t* box = head->next;
    while(box != tail){
        printf("%d", box->val);
        box = box->next;
        if(box != tail) printf(" "); };
    printf("\n");
    return;
}
int main()
{
    int i, n;
    cin >> n;
    string cmd; int key;
    box_t* head = init();
    box_t* tail = make_tail(head);
    for(i = 0; i < n; i++){
        cin >> cmd;
        if(cmd[0] == 'i'){ scanf("%d", &key); f_insert(head, key); }
        else if(cmd[6] == 'F'){ f_delete(head); }else if(cmd[6] == 'L'){ b_delete(tail); }
        else{ scanf("%d", &key); f_delete_key(head, tail, key); }
    }
    f_show(head, tail);
    return 0;
}