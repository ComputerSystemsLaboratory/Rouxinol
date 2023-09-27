#include<iostream>
struct Node{
    int key;
    Node *prev, *next;
};
class  List{
public:
    List(){
        nil = new Node();
        nil->prev = nil;
        nil->next = nil;
    }
    ~List(){
        Node *cur = nil->next;
        Node *tmp;
        while(cur != nil){
            tmp = cur->next;
            delete cur;
            cur = tmp;
        }
        delete nil;
    }
    void insert(int key){
        Node *x = new Node();
        x->key = key;
        x->next = nil->next;
        nil->next->prev = x;
        nil->next = x;
        x->prev = nil;
    }
    Node* find(int key){
        Node *cur = nil->next;
        while(cur != nil && cur->key !=key) cur = cur->next;
        return cur;
    }
    void deleteList(Node *t){
        if(t == nil) return;
        t->prev->next = t->next;
        t->next->prev = t->prev;
        delete t;
    }
    void deleteFirst(){
        deleteList(nil->next);
    }
    void deleteLast(){
        deleteList(nil->prev);
    }
    void deleteKey(int key){
        deleteList(find(key));
    }
    void printList(){
        Node *cur = nil->next;
        while(cur != nil){
            std::cout<<cur->key;
            cur = cur->next;
            if(cur != nil) std::cout<<' ';
        }
        std::cout<<std::endl;
    }
private:
    Node *nil;
};
int main() {
    using namespace std;
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    List list;
    for(int i=0;i<N;++i){
        string s;
        cin>>s;
        if(s=="insert"){
            int n;
            cin>>n;
            list.insert(n);
        }else if(s=="delete"){
            int n;
            cin>>n;
            list.deleteKey(n);
        }else if(s=="deleteFirst"){
            list.deleteFirst();
        }else list.deleteLast();
    }
    list.printList();
}