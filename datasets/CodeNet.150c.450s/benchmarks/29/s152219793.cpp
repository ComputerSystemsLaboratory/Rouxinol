#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

class Node {
public:
    int key;
    Node* next;
    Node* prev;
};
typedef Node* NodePtr_t;

void init();
void insert(int key);
void deleteKey(int target);
void deleteFirst();
void deleteLast();
void printList();

int main()
{
    init();

    int op_num;
    // cin >> op_num;
    scanf("%d", &op_num);

    // std::string op;
    char op_cstr[20];
    int key;

    while (op_num--) {
        // cin >> op;
        scanf("%s", op_cstr);
        std::string op = op_cstr;
        if (op == "insert") {
            // cin >> key;
            scanf("%d", &key);
            insert(key);
        } else if (op == "delete") {
            // cin >> key;
            scanf("%d", &key);
            deleteKey(key);
        } else if (op == "deleteFirst") {
            deleteFirst();
        } else if (op == "deleteLast") {
            deleteLast();
        } else {
            // cout << "ERROR!" << endl;
        }
    }

    printList();

    return 0;
}

NodePtr_t root;
void init()
{
    root = new Node();
    root->next = root;
    root->prev = root;
}

void insert(int key)
{
    NodePtr_t inserted;
    inserted = new Node();
    inserted->next = root->next;
    inserted->prev = root;
    inserted->key = key;

    root->next->prev = inserted;
    root->next = inserted;
}

void deleteNode(NodePtr_t node);

void deleteKey(int target)
{
    NodePtr_t current = root->next;
    while (current != root) {
        if (current->key == target) {
            deleteNode(current);
            return;
        }
        current = current->next;
    }
}

void deleteNode(NodePtr_t node)
{
    if (node == root) {
        return;
    }
    node->next->prev = node->prev;
    node->prev->next = node->next;
    delete node;
}

void deleteFirst()
{
    deleteNode(root->next);
}

void deleteLast()
{
    deleteNode(root->prev);
}

void printList()
{
    NodePtr_t current = root->next;
    while (current != root) {
        if (current != root->next) {
            // cout << " ";
            printf(" ");
        }
        // cout << (current->key);
        printf("%d", current->key);
        current = current->next;
    }
    // cout << endl;
    printf("\n");
}