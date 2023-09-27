#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>

typedef struct box { int val; string name; box *prev, *next; } box_t;

box_t* init()
{
    box_t* head = new box_t;
    head->val = -1;
    head->name = '\0';
    head->next = NULL;
    head->prev = NULL;
    return head;
}

box_t* make_tail(box_t* head)
{
    box_t* tail = new box_t;
    tail->val = -1;
    tail->name = '\0';
    head->next = tail;
    tail->next = NULL;
    tail->prev = head;
    return tail;
}

box_t* b_insert(box_t* tail, int data, string str)
{
    box_t* box = new box_t;
    box->val = data;
    box->name = str;
    box->prev = tail->prev;
    box->next = tail;
    tail->prev->next = box;
    tail->prev = box;
    return box;
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

void f_cycle(box_t* head, box_t* tail)
{
    box_t* box1 = head->next;
    box_t* box2 = tail->prev;
    if(box1 == tail || box1 == box2) return;
    box1->next->prev = head;
    head->next = box1->next;
    box2->next = box1;
    box1->prev = box2;
    box1->next = tail;
    tail->prev = box1;
    return;
}

int task(box_t* head, box_t* tail, int t, int q)
{
    box_t* box = head->next;
    if(box->next == tail){
        t = t + box->val;
        cout << box->name;
        printf(" %d\n", t);
        delete box;
        return -1;
    }
    if(box->val > q){
        box->val -= q;
        t = t + q;
        f_cycle(head, tail);
        return t;
    }
    t = t + box->val;
    cout << box->name;
    printf(" %d\n", t);
    f_delete(head);
    return t;
}

int main()
{
    box_t* head = init();
    box_t* tail = make_tail(head);
    int i, n, w, q;
    scanf("%d %d", &n, &q);
    string s;
    for(i = 0; i < n; i++){ cin >> s; scanf("%d", &w); b_insert(tail, w, s); }
    int time = 0;
    do{
        time = task(head, tail, time, q);
    }while(time > 0);
    return 0;
}