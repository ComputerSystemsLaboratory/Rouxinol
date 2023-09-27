#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next,*prev;
};

class List{
    Node* nil;
    Node* searchNode(int x){
        Node* p = nil->next;
        while (p != nil && p->data != x){
            p = p->next;
        }
        return p;
    }
    void deleteNode(Node *node){
        if(node == nil)return;
        node->prev->next = node->next;
        node->next->prev = node->prev;
        delete(node);
    }
public:
    List() {
        nil = new Node();
        nil->next = nil;
        nil->prev = nil;
    }
    void insertFirst(int x){
        Node* node = new Node();
        node->data = x;
        node->next = nil->next;
        node->prev = nil;

        nil->next->prev = node;
        nil->next = node;
    }
    void deleteData(int x){
        deleteNode(searchNode(x));
    }
    void deleteFirst(){
        deleteNode(nil->next);
    }
    void deleteLast(){
        deleteNode(nil->prev);
    }
    void print(){
        Node *p = nil->next;
        while (p != nil){
            if(p != nil->next) cout << " ";
            cout << p->data;
            p = p->next;
        }
        cout << endl;
    }
};

int main(){
cin.tie(0);
    ios::sync_with_stdio(false);
    
    List l;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        string command;
        cin >> command;
        if (command == "insert") {
            cin >> num;
            l.insertFirst(num);
        } else if (command == "delete") {
            cin >> num;
            l.deleteData(num);
        } else if (command == "deleteFirst") {
            l.deleteFirst();
        } else if (command == "deleteLast") {
            l.deleteLast();
        }
    }
    l.print();
    return 0;
}