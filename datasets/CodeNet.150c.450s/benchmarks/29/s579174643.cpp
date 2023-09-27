#include <iostream>
using namespace std;



class list {
public:
    int val;
    list* prev;
    list* next;
};
list* nil;

void initialize()
{
    nil = new list;
    nil->prev = nil;
    nil->next = nil;
}

void insert_(int val)
{
    list* p = new list;
    p->val = val;
    p->prev = nil;
    p->next = nil->next;
    p->next->prev = p;
    p->prev->next = p;
}

list* search(int val)
{
    for (list* p = nil->next; p != nil; p = p->next) {
        if (p->val == val) return p;
    }
    return nil;
}

void delete_(list* p)
{
    if (p == nil) return;
    p->prev->next = p->next;
    p->next->prev = p->prev;
    delete p;
}


void trace()
{
    for (list* p = nil->next; p != nil; p = p->next) {
        cout << p->val;
        if (p->next != nil) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    initialize();
    int n;
    cin >> n;

    list* head;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "deleteFirst") {
            delete_(nil->next);
            continue;
        }
        if (command == "deleteLast") {
            delete_(nil->prev);
            continue;
        }
        int val;
        cin >> val;
        if (command == "insert") {
            insert_(val);
        } else {
            delete_(search(val));
        }
    }
    trace();
}