#include <iostream>
#include <string>

using namespace std;

template<typename T>
class DoublyLinkedList {
private:
    struct Node {
    public:
        T val;
        Node *prev;
        Node *next;
    };

    Node *dummy;

public:
    DoublyLinkedList() {
        dummy = new Node();
        dummy->prev = dummy;
        dummy->next = dummy;
    }

    ~DoublyLinkedList() {
        Node *node = dummy->next;
        while (node != dummy) {
            node = node->next;
            delete node->prev;
        }
        delete dummy;
    }

    void insert_head(T x) {
        Node *temp = dummy->next;
        dummy->next = new Node();
        dummy->next->val = x;
        dummy->next->prev = dummy;
        dummy->next->next = temp;
        temp->prev = dummy->next;
        return;
    }

    Node *search_node(T x) {
        Node *node = dummy->next;
        while (node != dummy && node->val != x) node = node->next;
        return node;
    }

    void delete_node(Node *node) {
        if (node != dummy) {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            delete node;
        }

        return;
    }

    void delete_key(T x) {
        delete_node(search_node(x));
        return;
    }

    void delete_first() {
        delete_node(dummy->next);
        return;
    }

    void delete_last() {
        delete_node(dummy->prev);
        return;
    }

    void print() {
        Node *node = dummy->next;
        while (node != dummy) {
            cout << node->val << (node->next == dummy ? "\n" : " ");
            node = node->next;
        }

        return;
    }
};

int main() {
    ios::sync_with_stdio(false);
    uint32_t n;
    cin >> n;

    DoublyLinkedList<uint32_t> l;
    string cmd;
    uint32_t key;
    while (n--) {
        cin >> cmd;

        if (cmd == "insert") {
            cin >> key;
            l.insert_head(key);
        } else if (cmd == "delete") {
            cin >> key;
            l.delete_key(key);
        } else if (cmd == "deleteFirst") {
            l.delete_first();
        } else if (cmd == "deleteLast") {
            l.delete_last();
        }
    }

    l.print();

    return 0;
}