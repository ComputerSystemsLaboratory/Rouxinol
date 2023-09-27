#include<iostream>
#include<string>
using namespace std;

struct Node{
    int   key;
    Node* prev;
    Node* next;
};

class List{
    Node* nil;
    void delete_node(Node* n){
        n->prev->next = n->next;
        n->next->prev = n->prev;
        delete n;
    }
public:
    List(){
        nil = new Node;
        nil->prev = nil;
        nil->next = nil;
    }
    void insert_key(int key){
        Node* n = new Node;
        n->key = key;
        nil->next->prev = n;
        n->next = nil->next;
        nil->next = n;
        n->prev = nil;
    }
    void delete_key(int key){
        for (Node* n = nil->next; n != nil; n = n->next) {
            if (n->key == key) {
                delete_node(n);
                return;
            }
        }
    }
    void print_all(){
        for (Node* n = nil->next; n != nil; n = n->next) {
            if (n != nil->next) cout << " ";
            cout << n->key;
        }
        cout << endl;
    }
    void deleteFirst(){
        delete_node(nil->next);
    }
    void deleteLast(){
        delete_node(nil->prev);
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    List l;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "deleteFirst") {
            l.deleteFirst();
            continue;
        }
        if (command == "deleteLast") {
            l.deleteLast();
            continue;
        }
        int key;
        cin >> key;
        if (command == "insert") {
            l.insert_key(key);
            continue;
        }
        if (command == "delete") {
            l.delete_key(key);
            continue;
        }
    }
    l.print_all();
    return 0;
}