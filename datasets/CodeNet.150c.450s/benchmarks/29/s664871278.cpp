#include <string>
#include <sstream>
#include <iostream>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

using namespace std;
typedef pair<int ,int > P;

struct Node {
    int value;
    Node *next;
    Node *prev;
};
Node *nil;

void init() {
    nil = new Node();
    nil->next = nil;
    nil->prev = nil;
}

void insert_node(int x) {
    Node *p = new Node;
    p->value = x;

    p->next = nil->next;
    nil->next->prev=p;
    nil->next=p;
    p->prev=nil;
}

Node* search_node(int x) {
    Node *cur = nil->next;
    while(cur != nil && cur->value != x) cur = cur->next;
    return cur;
}

void delete_node(Node *p) {
    if(p == nil) return;
    p->prev->next=p->next;
    p->next->prev=p->prev;
    delete p;
}
void delete_first_node() {
    delete_node(nil->next);
}
void delete_last_node() {
    delete_node(nil->prev);
}
void delete_key_node(int x) {
    delete_node(search_node(x));
}

int main() {
    ios::sync_with_stdio(false);
    init();
    int n;
    string q;
    cin>>n;
    while(n--) {
        int x;
        cin>>q;
        if(q=="insert") {
            cin>>x;
            insert_node(x);
        }
        else if(q=="delete") {
            cin>>x;
            delete_key_node(x);
        }
        else if(q=="deleteFirst") {
            delete_first_node();
        }
        else if(q=="deleteLast") {
            delete_last_node();
        }
    }
    int t=0;
    Node *cur = nil->next;
    while(cur != nil) {
        if(t++) cout<<" ";
        cout<<cur->value;
        cur=cur->next;
    }
    cout<<endl;
    
    return 0;
}