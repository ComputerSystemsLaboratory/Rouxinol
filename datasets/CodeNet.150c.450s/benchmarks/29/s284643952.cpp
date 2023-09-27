#include <iostream>
#include <vector>
#include <cassert>
#include <cstdio>
#include <cstring>

using namespace std;

//const char* INSERT       = "insert";
//const char* DELETE       = "delete";
//const char* DELETE_FIRST = "deleteFirst";
//const char* DELETE_LAST  = "deleteLast";

struct Node {
    int val;
    Node *next;
    Node *prev;
};

Node *head, *tail;

vector<Node*> cache;

int main(void) {

    int n;
    cin >> n;

    head = new Node;
    head->val = -1;

    tail = new Node;
    tail->val = -1;
    tail->next = head;
    tail->prev = head;

    head->next = tail;
    head->prev = tail;

    char command[12];
    for (int i = 0; i < n; ++i) {
        cin >> command;
        if (command[0] == 'i') {
//        if (strncmp(command, INSERT, 6) == 0) {
            int x;
            cin >> x;
            Node *newnode;
            if (cache.size() > 0) {
                newnode = cache.back();
                cache.pop_back();
            }
            else {
                newnode = new Node;
            }
            newnode->val = x;
            newnode->next = head->next;
            newnode->prev = head;
            head->next->prev = newnode;
            head->next = newnode;
        }
        else if (strlen(command) == 6) {
//        else if (strncmp(command, DELETE, 6) == 0) {
            int x;
            cin >> x;
            Node *node = head->next;
            while (node != tail) {
                if (node->val == x) {
                    node->next->prev = node->prev;
                    node->prev->next = node->next;
                    cache.push_back(node);
                    break;
                }
                node = node->next;
            }
        }
        else if (command[6] == 'F') {
//        else if (strncmp(command, DELETE_FIRST, 11) == 0) {
            Node *node = head->next;
            node->next->prev = head;
            head->next = node->next;
            cache.push_back(node);
        }
        else {
//        else if (strncmp(command, DELETE_LAST, 10) == 0) {
            Node *node = tail->prev;
            tail->prev = node->prev;
            node->prev->next = tail;
            cache.push_back(node);
        }
    }

    Node *node = head->next;
    if (node != tail) {
        printf("%d", node->val);
        node = node->next;
        while (node != tail) {
            printf(" %d", node->val);
            node = node->next;
        }
    }
    printf("\n");

    delete head;
    delete tail;

    return 0;
}