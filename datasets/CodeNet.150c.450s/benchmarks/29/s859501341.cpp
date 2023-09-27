#include <iostream>
using namespace std;

struct node{
    int key;
    node *next;
    node *prev;
};

class DLList{
private:
//    node *z;
public:
node *z;
    DLList(){
        z = new node;
        z->key = -1;
        z->next = z;
        z->prev = z;
    }
    
    ~DLList(){
        node *tmp = z->next;
        node *tmpnext;
        
        while(tmp != z){
            tmpnext = tmp->next;
            delete tmp;
            tmp = tmpnext;
        }
        delete z;
    }
    
    void insert(int v){
        node *tmp;
        tmp = new node;
        tmp->prev = z;
        tmp->next = z->next;
        tmp->key = v;
        z->next->prev = tmp;
        z->next = tmp;
    }
    
    void deleteKey(int v){
        node *tmp;
        tmp = z->next;
        
        while(tmp != z){
            if(tmp->key == v){
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                delete tmp;
                break;
            }
            tmp = tmp->next;
        }
    }
    
    void deleteFirst(){
        if(z->next != z){
            node *tmp;
            tmp = z->next;
            tmp->next->prev = z;
            z->next = z->next->next;
            delete tmp;
        }
    }
    
    void deleteLast(){
        if(z->prev != z){
            node *tmp;
            tmp = z->prev;
            tmp->prev->next = z;
            z->prev = z->prev->prev;
            delete tmp;
        }
    }
    
    void show(){
        node *tmp;
        tmp = z->next;
        
        if(tmp !=z){
            cout << tmp->key;
            tmp = tmp->next;
        }
        
        while(tmp != z){
            cout << " " << tmp->key;
            tmp = tmp->next;
        }
        
        cout << endl;
    }
};

int main(void){
    DLList li;
    int n;
    string op;
    int v;
    int i;
    
    cin >> n;
    
    for(i = 0; i < n; i++){
        cin >> op;
        
        if(op == "insert"){
            cin >> v;
            li.insert(v);
        }
        
        if(op == "delete"){
            cin >> v;
            li.deleteKey(v);
        }
        
        if(op == "deleteFirst"){
            li.deleteFirst();
        }
        
        if(op == "deleteLast"){
            li.deleteLast();
        }
    }
    
    li.show();
    return 0;
}