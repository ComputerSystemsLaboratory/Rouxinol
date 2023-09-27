#include <iostream>
using namespace std;



class list {
public:
    int val;
    list* prev;
    list* next;
};
list* head = NULL;
list* tail = NULL;

void insert_(int val)
{
    list* element;
    element = new list;
    element->val = val;
    element->prev = NULL;
    if (head == NULL) {
        element->next = NULL;
        tail = element;
    } else {
        head->prev = element;
        element->next = head;
    }
    head = element;
}

void delete_(int val)
{
    list* p = head;
    while (p->val != val) {
        if (p == tail) {
            return;
        }
        p = p->next;
    }
    if (p == head) {
        head = p->next;
    } else {
        p->prev->next = p->next;
    }
    if (p == tail) {
        tail = p->prev;
    } else {
        p->next->prev = p->prev;
    }
    delete p;
}

void deleteFirst()
{
    list* p = head;
    head = p->next;
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;
    }
    delete p;
}

void deleteLast()
{
    list* p = tail;
    tail = p->prev;
    if (tail != NULL) {
        tail->next = NULL;
    } else {
        head = NULL;
    }
    delete p;
}

void trace()
{
    for (list* p = head; p != NULL; p = p->next) {
        cout << p->val;
        if (p->next != NULL) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    list* head;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "deleteFirst") {
            deleteFirst();
            continue;
        }
        if (command == "deleteLast") {
            deleteLast();
            continue;
        }
        int val;
        cin >> val;
        if (command == "insert") {
            insert_(val);
        } else {
            delete_(val);
        }
    }
    trace();
}