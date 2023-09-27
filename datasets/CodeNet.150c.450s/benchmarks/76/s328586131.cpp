#include<bits/stdc++.h>

#define REP(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,a,b) for(int (i)=(a);i<(b);++(i))
#define FOR_DOWN(i,a,b) for(int (i)=(a);i>=(b);--(i))
#define ALL(obj) (obj).begin(),(obj).end()
#define space <<" "<<
#define maxs(x,y) (x=max(x,y))
#define mins(x,y) (x=min(x,y))
#define FIX fixed<<setprecision(10)
using namespace std;

using ll = long long; using ull = unsigned long long;
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
using pii = pair<int,int>; using pll = pair<ll,ll>;

const ll MOD = 1e9+7;

class Stack{
private:
char m[20000];
int tp;
public:
    Stack(){
    tp=0;
    }
    void push(char x){
        tp++;
        m[tp]=x;
    }
    char pop(){
        tp--;
        return m[tp+1];
    }
}; 
class Queue{
private:
pair<string,int> m[60000];
int head,tail;
public:
    Queue(){
        head=0;
        tail=0;
    }
    bool isEmpty(){
        return head==tail;
    }
    void enqueue(pair<string,int> x){
        m[tail]=x;
        if(tail +1 ==60000)tail=0;
        else tail++;
    }
    pair<string,int> deque(){
        pair<string,int> x=m[head];
        if(head+1==60000)head=0;
        else head++;
        return x;
    } 
};
/*
struct Node{
    int key;
    Node* prev;
    Node* next;
};

class LinkedList{
public:
LinkedList(){
    dammy= new Node();
    dammy->key =0;
    dammy->prev= dammy;
    dammy->next= dammy;
}
~LinkedList(){
    Node* tmpNode =dammy->next;
    Node* nextNode;
    while(tmpNode != dammy){
        nextNode=tmpNode->next;
        delete tmpNode;
        tmpNode=nextNode;
    }
    delete dammy;
}
void insertNode(int x){
    Node* currentNode=dammy->next;
    dammy->next=new Node();
    dammy->next-> key =x;
    dammy->next->next=currentNode;
    dammy->next->prev=dammy;
    currentNode->prev = dammy->next;
}
    Node* find(int key){
    for(Node* i=dammy->next;i!=dammy;i=i->next){
      if(i->key==key)return i;
    }
    return dammy;
    }
    void deleteNode(int x){
    Node* currentNode = find(x);
    if(currentNode==dammy)return;
    currentNode->prev->next=currentNode->next;
    currentNode->next->prev=currentNode->prev;
    delete currentNode;
    }
    void deleteFirst(){
        Node* currentNode = dammy->next;
        dammy->next = dammy->next->next;
        dammy->next->prev = dammy;
        delete currentNode; 
    };
 
    void deleteLast(){
        Node* currentNode = dammy->prev;
        dammy->prev = dammy->prev->prev;
        dammy->prev->next = dammy;
        delete currentNode; 
    };

    void printList(){
    Node* currentNode = dammy->next;;
    int sp = 1;
    while(1){
    if ( currentNode == dammy ) break;
    if ( sp == 0)  cout<<" ";
    cout<<currentNode->key;
    currentNode = currentNode->next;
    sp = 0;
    }
    cout<<endl;
    }
    private:
    Node* dammy;
};
*/

struct node{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};
typedef struct node * Node;
Node root,NIL;


Node treeSearch(Node u,int k){
    if(u==NIL)
        return NIL;
    if(k==u->key){
        return u;
    }else if(k<u->key){
        return treeSearch(u->left,k);
    }else
    {
        return treeSearch(u->right,k);
    }
}
void insert(int k){
    Node y = NIL;
    Node x = root;
    Node z;

    z = (Node)malloc(sizeof(struct node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x!=NIL)
    {
        y = x;
        if(z->key<x->key){
            x = x->left;
        }else
        {
            x = x->right;
        }
    }
    z->parent = y;
    if(y==NIL){
        root = z;
    }else if(z->key<y->key){
        y->left = z;
    }else{
        y->right = z;
    }
}

void inorder(Node u){
    if(u==NIL)
        return;
    inorder(u->left);
    cout <<" "<< u->key;
    inorder(u->right);
}
void preorder(Node u){
    if(u==NIL)
        return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n, i, x;
    char com[20];
    cin >> n;
    for (i = 0;i<n;i++){
        cin >> com;
        if(com[0]=='f'){
            cin>>x;
            Node t = treeSearch(root, x);
            if (t != NIL)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }else if (com[0] == 'i'){
            cin >> x;
            insert(x);
        }else if (com[0] == 'p'){
            inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }else if (com[0] == 'd'){
        }
    }
}

